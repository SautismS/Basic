/*
ʵ��һ������ѧ���ɼ�������ȼ�����ͳ�Ʋ����������ĺ�������ӡ����ѧ����Ϣ�Ͳ������������
*/

#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>

// ѧ���ṹ��
struct student {
    long num;
    char name[100];
    int score;
    char grade;
};

// ���ú���
void set_grade(struct student students[], int n, int* failCount) {
    for (int i = 0; i < n; i++) {
        if (students[i].score >= 85 && students[i].score <= 100)
            students[i].grade = 'A';
        else if (students[i].score >= 70 && students[i].score < 85)
            students[i].grade = 'B';
        else if (students[i].score >= 60 && students[i].score < 70)
            students[i].grade = 'C';
        else
            students[i].grade = 'D';

        if (students[i].grade == 'D')
            (*failCount)++;
    }
}

// ��ӡѧ����Ϣ
void print_students(struct student students[], int n) {
    printf("����ѧ����Ϣ���£�\n");
    for (int i = 0; i < n; i++) {
        printf("ѧ�ţ�%d\t������%s\t�ɼ���%d\t�ȼ���%c\n", students[i].num, students[i].name, students[i].score, students[i].grade);
    }
}

int main() {
    struct student students[5];

    // �û�����ѧ����Ϣ
    for (int i = 0; i < 5; i++) {
        printf("������ѧ�š������ͳɼ����Կո�ָ�����\n");
        scanf("%d\t%s\t%d", &students[i].num, students[i].name, &students[i].score);
    }

    int failCount = 0;

    set_grade(students, 5, &failCount);

    print_students(students, 5);

    // �޸�ѧ��Ϊ31004��ͬѧ����Ϊ "ben"
    strcpy_s(students[3].name, "ben");

    printf("\n�޸ĺ������ѧ����Ϣ���£�\n");
    print_students(students, 5);

    printf("\n������������%d\n", failCount);

    return 0;
}