#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const double AREA = 3.305785;
	double area2;
	printf("평수 입력: ");
	scanf("%lf", &area2);
	printf("입력된 평수:%lf \n", area2);
	printf("제곱미터:%lf \n", area2 * AREA);

	return 0;
}