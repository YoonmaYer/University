#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1, num2 = 0.0; // double�� ���� ���� �� �ʱ�ȭ
	int* p1 = (int*)&num1; // double���� int�� ����ȯ
	int* p2 = (int*)&num2;

	printf("�� ���� �Է�: ");
	scanf("%d %d", p1, p2);


	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
	printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
	printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2);
	printf("%d %% %d = %d", *p1, *p2, *p1 % * p2);
}