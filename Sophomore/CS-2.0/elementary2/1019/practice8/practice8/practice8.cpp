#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double f1, f2;
	printf("�� �Ǽ��� �Է��Ͻÿ�.\n");
	scanf("%lf %lf", &f1, &f2);
	printf("��: %lf + %lf = %lf\n", f1, f2, f1 + f2);
	printf("���: %lf / 2 = %lf", f1 + f2, f1 + f2 / 2);
	return 0;
}