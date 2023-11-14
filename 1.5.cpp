/*
输入某年某月某日，输出这一天是这一年的第几天。
*/

#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int getDayOfYear(int year, int month, int day) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int leapDaysInMonth[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int i;
    int totalDays = 0;

    int* days;
    if (isLeapYear(year))
        days = leapDaysInMonth;
    else
        days = daysInMonth;

    for (i = 1; i < month; i++) {
        totalDays += days[i];
    }

    totalDays += day;

    return totalDays;
}

int main() {
    int year, month, day;

    printf("请输入年份：");
    scanf_s("%d", &year);
    printf("请输入月份：");
    scanf_s("%d", &month);
    printf("请输入日期：");
    scanf_s("%d", &day);

    int dayOfYear = getDayOfYear(year, month, day);
    printf("%d年%d月%d日是该年的第%d天。\n", year, month, day, dayOfYear);
}