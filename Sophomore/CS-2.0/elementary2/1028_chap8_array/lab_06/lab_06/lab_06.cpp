#include<stdio.h>
#define SIZE 5

int main(void)
{
	double num[SIZE] = { 98.56, 78.62, 78.69, 89.32, 95.29 };
	double sum = 0.0;
	for (int i = 0; i < sizeof(num) / sizeof(double); i++)
	{
		printf("%.2lf ", num[i]);
	sum += num[i];
	}
	printf("\n");
	printf("�迭�� ���� %.3lf�̸� ����� %.3lf�Դϴ�.", sum, sum / SIZE);
	return 0;
}