#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	const double P = 3.305785;
	int m1 = 0;
	int m2 = 0;

	scanf("%d", &m1);
	scanf("%d", &m2);

	printf("%d(��): %3f(��������)\n",m1 ,m1 * P);
	printf("%d(��): %3f(��������)\n",m2, m2 * P);

	return 0;
}