#define _CRT_SECURE_NO_WARNINGS
#define PI  3.14
#include <stdio.h>



double area(double r);
double circleference(double r);

int main(void)
{
	double r = 0.0;

	printf("�� ������ �Է� >> ");
	scanf("%lf", &r);

	printf("�������� %.2lf�� ���� ������ %.3lf�Դϴ�.\n", r, area(r));
	printf("�������� %.2lf�� ���� ���̴� %.3lf�Դϴ�.", r, circleference(r));

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