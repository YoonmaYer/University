#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b = 0;

	printf("두 실수를 입력하시오: \n");
	scanf("%lf %lf", &a, &b);
	printf("합 : %lf + %lf = %lf\n",a,b,a+b);
	printf("평균: %lf / 2 = %lf", a + b, (a + b) / 2);

	return 0;

}