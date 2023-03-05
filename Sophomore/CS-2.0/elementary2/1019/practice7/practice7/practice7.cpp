#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	const double MILE = 3.305785;
	double m;
	printf("평수 입력: ");
	scanf("%lf", &m);
	printf("입력된 평수: %lf\n", m);
	printf("제곱미터: %lf", m * MILE);

	return 0;
}