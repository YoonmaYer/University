#define _CRT_SECURE_NO_WARNINGS
#define PI  3.14
#include <stdio.h>



double area(double r);
double circleference(double r);

int main(void)
{
	double r = 0.0;

	printf("원 반지름 입력 >> ");
	scanf("%lf", &r);

	printf("반지름이 %.2lf인 원의 면적은 %.3lf입니다.\n", r, area(r));
	printf("반지름이 %.2lf인 원의 길이는 %.3lf입니다.", r, circleference(r));

	return 0;
}

double area(double r)
{
	double result;
	result = PI * r * r;
	return result;
}

double circleference(double r)
{
	double result;
	result = PI * 2 * r;
	return result;
}