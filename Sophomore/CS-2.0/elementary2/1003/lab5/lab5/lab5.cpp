#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int date = 0;
	int year = 365;
	int month = 30;

	printf("���� �Է� >> ");
	scanf("%d", &date);
	printf("�Է��� ��¥: %d\n", date);

	printf("%d�� %d�� %d��",date / year,(date % year) / month, date - year - month);
}