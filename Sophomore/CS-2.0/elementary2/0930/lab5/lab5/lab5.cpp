#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b = 0;

	printf("�� �Ǽ��� �Է��Ͻÿ�: \n");
	scanf("%lf %lf", &a, &b);
	printf("�� : %lf + %lf = %lf\n",a,b,a+b);
	printf("���: %lf / 2 = %lf", a + b, (a + b) / 2);

	return 0;

}