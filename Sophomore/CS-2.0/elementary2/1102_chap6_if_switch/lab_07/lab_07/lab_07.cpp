#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int month = 0;
	printf("년도의 월(month)를 입력하세요. >> ");
	scanf("%d", &month);
	
	if (month == 1 || month == 2 || month == 3)
		printf("%d월(month)는 1분기입니다.", month);
	else if (month == 4 || month == 5 || month == 6)
		printf("%d월(month)는 2분기입니다.", month);
	else if (month == 7 || month == 8 || month == 9)
		printf("%d월(month)는 3분기입니다.", month);
	else if (month == 10 || month == 11 || month == 12)
		printf("%d월(month)는 4분기입니다.", month);
	else
		printf("error");

	return 0;
}