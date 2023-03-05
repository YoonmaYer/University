#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	const double MILE = 0.621371;
	int km1;
	int km2;
	int km3;
	int km4;

	scanf("%d", &km1);
	scanf("%d", &km2);
	scanf("%d", &km3);
	scanf("%d", &km4);

	printf("%d(km): %lf(mile)\n", km1, km1 * MILE);
	printf("%d(km): %lf(mile)\n", km2, km2 * MILE);
	printf("%d(km): %lf(mile)\n", km3, km3 * MILE);
	printf("%d(km): %lf(mile)\n", km4, km4 * MILE);

	return 0;
}