/*
输入一个整数，输出它的中文格式，例如输入124，输出“一二四”。
*/
#include<stdio.h>

void printChinese(int num) {
    char* chinesenumber[10] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};

    if (num / 10)
        printChinese(num / 10);

    printf("%s", chinesenumber[num % 10]);
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf_s("%d", &num);

    if (num == 0) {
        printf("零");
    }
    else {
        if (num < 0) {
            printf("负");
            num = -num;
        }

        printChinese(num);
    }
}