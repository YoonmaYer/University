#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double height, weight;
	printf("Ű �Է�: ");
	scanf("%lf", &height);
	printf("������ �Է�: ");
	scanf("%lf", &weight);

	weight <= (height - 100) * 0.9 ? printf("�����Դϴ�.\n") : printf("���Դϴ�.\n");

	return 0;
}