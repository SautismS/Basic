/*
写一个函数，完成汉诺塔
*/

#include <stdio.h>

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("%c -> %c\n", A, B);
    }
    else {
        hanoi(n - 1, A, C, B); // 将 n-1 个盘子从 A 移动到 C
        printf("%c -> %c\n", A, B); // 将第 n 个盘子从 A 移动到 B
        hanoi(n - 1, C, B, A); // 将 n-1 个盘子从 C 移动到 B
    }
}

int main() {
    int n;

    printf("请输入圆盘数：");
    scanf_s("%d", &n);

    printf("移动步骤如下：\n");
    hanoi(n, 'A', 'B', 'C');

    return 0;
}