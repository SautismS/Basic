/*
����һ������������������ĸ�ʽ����������124�������һ���ġ���
*/
#include<stdio.h>

void printChinese(int num) {
    char* chinesenumber[10] = {"��", "һ", "��", "��", "��", "��", "��", "��", "��", "��"};

    if (num / 10)
        printChinese(num / 10);

    printf("%s", chinesenumber[num % 10]);
}

int main() {
    int num;
    printf("������һ��������");
    scanf_s("%d", &num);

    if (num == 0) {
        printf("��");
    }
    else {
        if (num < 0) {
            printf("��");
            num = -num;
        }

        printChinese(num);
    }
}