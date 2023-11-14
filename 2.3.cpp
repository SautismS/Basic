/*
写一个函数，输入一个整数，打印它的罗马数字。
*/

#include <stdio.h>

void printRoman(int num) {
    if (num <= 0 || num > 3999) {
        printf("输入的整数超出范围。\n");
        return;
    }

    char romanSymbols[] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
    int romanValues[] = { 1000, 500, 100, 50, 10, 5, 1 };

    for (int i = 0; i < sizeof(romanValues) / sizeof(int); i++) {
        int count = num / romanValues[i]; 
        num %= romanValues[i]; 

        for (int j = 0; j < count; j++) {
            printf("%c", romanSymbols[i]);
        }

        if (i < sizeof(romanValues) / sizeof(int) - 1) {
            int subtractValue = romanValues[i] - romanValues[i + 1];
            if (num >= subtractValue) {
                printf("%c%c", romanSymbols[i + 1], romanSymbols[i]);
                num -= subtractValue;
            }
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("请输入一个整数：");
    scanf_s("%d", &num);

    printf("对应的罗马数字为：");
    printRoman(num);

    return 0;
}