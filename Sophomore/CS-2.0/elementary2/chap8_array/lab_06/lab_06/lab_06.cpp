#include <stdio.h>

int main()
{
	double score[5] = { 98.56, 78.62, 78.69, 89.32, 95.29 };
	double result = 0.0;
	double everage = 0.0;

	for (int i = 0; i < score[i]; i++)
	{
		printf("%.2lf ", score[i]);
		result += score[i];
		everage = result / 5;
	}
	printf("\n�迭�� ���� %.3lf�̸� ����� %.3lf �Դϴ�.", result, everage);
	return 0;
}