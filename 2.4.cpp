/*
实现一个根据学生成绩设置其等级，并统计不及格人数的函数，打印所有学生信息和不及格的人数。
*/

#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>

// 学生结构体
struct student {
    long num;
    char name[100];
    int score;
    char grade;
};

// 设置函数
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

// 打印学生信息
void print_students(struct student students[], int n) {
    printf("所有学生信息如下：\n");
    for (int i = 0; i < n; i++) {
        printf("学号：%d\t姓名：%s\t成绩：%d\t等级：%c\n", students[i].num, students[i].name, students[i].score, students[i].grade);
    }
}

int main() {
    struct student students[5];

    // 用户输入学生信息
    for (int i = 0; i < 5; i++) {
        printf("请输入学号、姓名和成绩（以空格分隔）：\n");
        scanf("%d\t%s\t%d", &students[i].num, students[i].name, &students[i].score);
    }

    int failCount = 0;

    set_grade(students, 5, &failCount);

    print_students(students, 5);

    // 修改学号为31004的同学姓名为 "ben"
    strcpy_s(students[3].name, "ben");

    printf("\n修改后的所有学生信息如下：\n");
    print_students(students, 5);

    printf("\n不及格人数：%d\n", failCount);

    return 0;
}