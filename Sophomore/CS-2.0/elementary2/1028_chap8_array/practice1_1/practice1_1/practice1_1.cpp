#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;

	// 2���� �迭 �ʱ�ȭ
	int score[][COLSIZE] = { 0 };

	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; i < COLSIZE; j++)
		{
			printf("�߰����, �⸻��� ������ �ϳ��� �Է�: ");
			scanf("%d", &score[i][j]);

		}
	}

	printf("       �߰�        �⸻\n");
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
	printf("���: %6.2f %10.2f\n", (double)midsum /
		ROWSIZE, (double)finalsum / ROWSIZE);
	printf("\n������ ���� %d�̰� ", sum);
	printf("����� %.2f�̴�.\n", (double)sum / (ROWSIZE * COLSIZE));

	return 0;
}


