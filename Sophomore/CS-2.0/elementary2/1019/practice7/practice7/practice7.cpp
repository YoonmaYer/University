#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	const double MILE = 3.305785;
	double m;
	printf("��� �Է�: ");
	scanf("%lf", &m);
	printf("�Էµ� ���: %lf\n", m);
	printf("��������: %lf", m * MILE);

	return 0;
}