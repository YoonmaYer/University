#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getsum(int max);
int sum = 0;

int main()
{
	int num = 0;
	printf("1���� n������ ���� ���� ���� n�� �Է��Ͻÿ� >> ");
	scanf("%d", &num);
	
	int total = getsum(num);
	printf("1���� n������ ��: %d", total);
}

int getsum(int max)
{
	for (int i = 0; i <= max; i++)
		sum += i;

	return sum;
}