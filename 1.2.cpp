/*
输入一个整数数组和数组的长度，输出数组最大的值和它对应的下标。
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, max, num;
    printf("请输入整数数组长度：");
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    printf("请输入整数数组元素：");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }
    max = a[0];
    num = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            num = i;
        }
    }
    printf("最大值为 %d，对应的下标为 %d\n", max, num);
}