/*
дһ����������ɺ�ŵ��
*/

#include <stdio.h>

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("%c -> %c\n", A, B);
    }
    else {
        hanoi(n - 1, A, C, B); // �� n-1 �����Ӵ� A �ƶ��� C
        printf("%c -> %c\n", A, B); // ���� n �����Ӵ� A �ƶ��� B
        hanoi(n - 1, C, B, A); // �� n-1 �����Ӵ� C �ƶ��� B
    }
}

int main() {
    int n;

    printf("������Բ������");
    scanf_s("%d", &n);

    printf("�ƶ��������£�\n");
    hanoi(n, 'A', 'B', 'C');

    return 0;
}