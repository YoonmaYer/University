#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.14

int main(void)
{
	double radius = 0;
	printf("원 반지름: ");
	scanf("%lf", &radius);
	
	printf("원 면적: %lf\n", radius * radius * PI);
	printf("원 둘레: %lf\n", radius * 2 * PI);

	return 0;
}
