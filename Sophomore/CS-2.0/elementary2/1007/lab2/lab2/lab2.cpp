#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y;
	printf("��ǥ x, y �Է� >> ");
	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
		printf("��ǥ (%.2lf, %.2lf): 1��и�", x, y);
	else if (x  < 0 && y > 0)
		printf("��ǥ (%.2lf, %.2lf): 2��и�", x, y);
	else if (x < 0 && y < 0)
		printf("��ǥ (%.2lf, %.2lf): 3��и�", x, y);
	else if (x > 0 && y < 0)
		printf("��ǥ (%.2lf, %.2lf): 4��и�", x, y);

	else
		printf("error");

	return 0;
}