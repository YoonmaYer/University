#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.141592

int main(void)
{
	double radius;
	printf("�� ������ �Է�: ");
	scanf("%lf" ,&radius); // lf = 5�ڸ�
	printf("�� ������: %lf \n" ,radius);
	printf("�� ����: %lf \n" ,radius * radius * PI);
	printf("�� �ѷ�: %lf \n" ,radius * 2 * PI);

	return 0;
}

