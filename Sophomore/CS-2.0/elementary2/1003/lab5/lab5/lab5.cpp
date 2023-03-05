#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int date = 0;
	int year = 365;
	int month = 30;

	printf("일자 입력 >> ");
	scanf("%d", &date);
	printf("입력한 날짜: %d\n", date);

	printf("%d년 %d월 %d일",date / year,(date % year) / month, date - year - month);
}