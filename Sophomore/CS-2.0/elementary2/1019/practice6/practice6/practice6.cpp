#define _CRT_SECURE_NO_WARNINGS // scanf ������ �̰� ù�ٿ� ���� �����������
#include<stdio.h>
#define PI 3.141592


int main(void) {
	double r;
	printf("�� ������ �Է�: ");
	scanf("%lf", &r);
	printf("�� ������: %.4lf", r);
	printf("�� ����: %.4lf\n", r  * r *PI);
	printf("�� �ѷ�: %.4lf", 2 * r * PI);

	return 0;
}