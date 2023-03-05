#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month;

	printf("년도를 입력하세요 : ");
	scanf("%d", &year);
	printf("몇 월인지 입력하세요 : ");
	scanf("%d", &month);

	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31일\n");
		break;

	case 4: case 6: case 9: case 11:
		printf("30일\n");
		break;

	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("29일\n");
		else
			printf("28일\n");
		break;

	default:
		printf("잘못 입력했습니다.\n");
		break;
	}

	return 0;
}