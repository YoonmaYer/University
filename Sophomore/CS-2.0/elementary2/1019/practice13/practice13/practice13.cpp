#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	int max;

	printf("�� ���� ���� �Է� >> ");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = (num1 >= num2 && num1 >= num3) ? num1 :// return num1
		(num2 >= num1 && num2 >= num3) ? num2 : num3; // return num2 or num3

	printf("���� ū ��: %d", max);

	return 0;
}