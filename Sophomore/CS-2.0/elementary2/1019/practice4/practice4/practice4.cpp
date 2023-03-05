#include<stdio.h>

int main(void)
{
	const double MILE = 0.621371;

	printf("60(km): %.3lf(mile)\n", 60 * MILE);
	printf("80(km): %.3lf(mile)\n", 80 * MILE);
	printf("100(km): %.3lf(mile)\n", 100 * MILE);
	printf("120(km): %.3lf(mile)\n", 120 * MILE);

	return 0;
}