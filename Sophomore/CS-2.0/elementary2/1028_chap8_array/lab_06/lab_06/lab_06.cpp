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
	printf("배열의 합은 %.3lf이며 평균은 %.3lf입니다.", sum, sum / SIZE);
	return 0;
}