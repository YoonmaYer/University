#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FEET 30.48

int main(void)
{
	double cm = 0;
	printf("길이를 센티미터로 입력 (소수) >> ");
	scanf("%lf", &cm);

	printf("%lf 센티미터: %3f 피트", cm, cm / FEET);
}