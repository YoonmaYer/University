#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double fh;
	printf("ȭ�� �µ� �Է� :" );
	scanf("%lf" ,&fh);
	printf("�Էµ� ȭ�� �µ� : %lf \n" ,fh);
	printf("���� �µ� : %4f\n", (fh - 32)*5/9);
	return 0;
}