/*
��������������������ֵ��
*/
#include <stdio.h>

int main()
{
	int num[3] = {0, 0, 0};
	printf("�����������������û�������:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &num[i]);
    }
    int max;
    max = num[0] >= num[1] ? num[0] : num[1];
    max = num[2] >= num[1] ? num[2] : num[1];
    printf("��������Ϊ��%d\n", max);
}