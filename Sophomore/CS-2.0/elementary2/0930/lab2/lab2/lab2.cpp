#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.141592

int main(void)
{
	double radius;
	printf("원 반지름 입력: ");
	scanf("%lf" ,&radius); // lf = 5자리
	printf("원 반지름: %lf \n" ,radius);
	printf("원 면적: %lf \n" ,radius * radius * PI);
	printf("원 둘레: %lf \n" ,radius * 2 * PI);

	return 0;
}

