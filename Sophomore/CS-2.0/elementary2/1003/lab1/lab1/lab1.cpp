#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.14

int main(void)
{
	double radius = 0;
	printf("�� ������: ");
	scanf("%lf", &radius);
	
	printf("�� ����: %lf\n", radius * radius * PI);
	printf("�� �ѷ�: %lf\n", radius * 2 * PI);

	return 0;
}
