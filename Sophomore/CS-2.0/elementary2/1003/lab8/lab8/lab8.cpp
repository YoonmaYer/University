#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height, weight;

	printf("Ű �Է�: ");
	scanf("%d", &height);
	printf("������ �Է�: ");
	scanf("%d", &weight);


	weight <= (height - 100) * 0.9 ? printf("�����Դϴ�.\n") : printf("���Դϴ�.\n");

	return 0;

}