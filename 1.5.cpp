/*
����ĳ��ĳ��ĳ�գ������һ������һ��ĵڼ��졣
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

    printf("��������ݣ�");
    scanf_s("%d", &year);
    printf("�������·ݣ�");
    scanf_s("%d", &month);
    printf("���������ڣ�");
    scanf_s("%d", &day);

    int dayOfYear = getDayOfYear(year, month, day);
    printf("%d��%d��%d���Ǹ���ĵ�%d�졣\n", year, month, day, dayOfYear);
}