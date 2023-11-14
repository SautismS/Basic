/*
输入三个整数，输出最大值。
*/
#include <stdio.h>

int main()
{
	int num[3] = {0, 0, 0};
	printf("请输入三个整数，用换行区分:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &num[i]);
    }
    int max;
    max = num[0] >= num[1] ? num[0] : num[1];
    max = num[2] >= num[1] ? num[2] : num[1];
    printf("最大的整数为：%d\n", max);
}