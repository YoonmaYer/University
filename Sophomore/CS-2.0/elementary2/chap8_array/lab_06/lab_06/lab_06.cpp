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
	printf("\n배열의 합은 %.3lf이며 평균은 %.3lf 입니다.", result, everage);
	return 0;
}