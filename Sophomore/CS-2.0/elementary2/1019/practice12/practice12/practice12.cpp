#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double feet = 30.48;
	double cm = 0;
	printf("���̸� ��Ƽ���ͷ� �Է� (�Ҽ�) >> ");
	scanf("%lf", &cm);
	printf("%lf ��Ƽ����: %.3lf ��Ʈ", cm, cm / feet);

	return 0;
}