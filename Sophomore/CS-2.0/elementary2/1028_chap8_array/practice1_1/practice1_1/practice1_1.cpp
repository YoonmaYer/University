#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;

	// 2차원 배열 초기화
	int score[][COLSIZE] = { 0 };

	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; i < COLSIZE; j++)
		{
			printf("중간고사, 기말고사 점수를 하나씩 입력: ");
			scanf("%d", &score[i][j]);

		}
	}

	printf("       중간        기말\n");
	printf("   --------------------------\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
		{
			printf("%10d ", score[i][j]);
			sum += score[i][j];
			if (j == 0)
				midsum += score[i][j];
			else
				finalsum += score[i][j];
		}
		puts("");
	}

	printf("   ----------------------------------\n");
	printf("평균: %6.2f %10.2f\n", (double)midsum /
		ROWSIZE, (double)finalsum / ROWSIZE);
	printf("\n성적의 합은 %d이고 ", sum);
	printf("평균은 %.2f이다.\n", (double)sum / (ROWSIZE * COLSIZE));

	return 0;
}


