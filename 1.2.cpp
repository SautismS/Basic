/*
����һ���������������ĳ��ȣ������������ֵ������Ӧ���±ꡣ
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, max, num;
    printf("�������������鳤�ȣ�");
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("�ڴ����ʧ��\n");
        return 1;
    }
    printf("��������������Ԫ�أ�");
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
    printf("���ֵΪ %d����Ӧ���±�Ϊ %d\n", max, num);
}