#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FEET 30.48

int main(void)
{
	double cm = 0;
	printf("���̸� ��Ƽ���ͷ� �Է� (�Ҽ�) >> ");
	scanf("%lf", &cm);

	printf("%lf ��Ƽ����: %3f ��Ʈ", cm, cm / FEET);
}