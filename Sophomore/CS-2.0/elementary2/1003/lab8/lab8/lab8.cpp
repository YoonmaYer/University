#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height, weight;

	printf("키 입력: ");
	scanf("%d", &height);
	printf("몸무게 입력: ");
	scanf("%d", &weight);


	weight <= (height - 100) * 0.9 ? printf("정상입니다.\n") : printf("비만입니다.\n");

	return 0;

}