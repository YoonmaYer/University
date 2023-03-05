#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y;
	printf("ÁÂÇ¥ x, y ÀÔ·Â >> ");
	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
		printf("ÁÂÇ¥ (%.2lf, %.2lf): 1»çºÐ¸é", x, y);
	else if (x  < 0 && y > 0)
		printf("ÁÂÇ¥ (%.2lf, %.2lf): 2»çºÐ¸é", x, y);
	else if (x < 0 && y < 0)
		printf("ÁÂÇ¥ (%.2lf, %.2lf): 3»çºÐ¸é", x, y);
	else if (x > 0 && y < 0)
		printf("ÁÂÇ¥ (%.2lf, %.2lf): 4»çºÐ¸é", x, y);

	else
		printf("error");

	return 0;
}