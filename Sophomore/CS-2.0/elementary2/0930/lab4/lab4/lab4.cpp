#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const double AREA = 3.305785;
	double area2;
	printf("��� �Է�: ");
	scanf("%lf", &area2);
	printf("�Էµ� ���:%lf \n", area2);
	printf("��������:%lf \n", area2 * AREA);

	return 0;
}