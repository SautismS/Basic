/*
дһ������������һ����������ӡ�����������֡�
*/

#include <stdio.h>

void printRoman(int num) {
    if (num <= 0 || num > 3999) {
        printf("���������������Χ��\n");
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

    printf("������һ��������");
    scanf_s("%d", &num);

    printf("��Ӧ����������Ϊ��");
    printRoman(num);

    return 0;
}