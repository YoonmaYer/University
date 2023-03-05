#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double f1, f2;
	printf("두 실수를 입력하시오.\n");
	scanf("%lf %lf", &f1, &f2);
	printf("합: %lf + %lf = %lf\n", f1, f2, f1 + f2);
	printf("평균: %lf / 2 = %lf", f1 + f2, f1 + f2 / 2);
	return 0;
}