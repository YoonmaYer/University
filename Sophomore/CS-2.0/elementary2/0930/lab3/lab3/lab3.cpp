#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double fh;
	printf("È­¾¾ ¿Âµµ ÀÔ·Â :" );
	scanf("%lf" ,&fh);
	printf("ÀÔ·ÂµÈ È­¾¾ ¿Âµµ : %lf \n" ,fh);
	printf("¼·¾¾ ¿Âµµ : %4f\n", (fh - 32)*5/9);
	return 0;
}