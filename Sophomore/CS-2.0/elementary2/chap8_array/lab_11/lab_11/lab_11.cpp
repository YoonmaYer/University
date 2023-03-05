#include <stdio.h>

int main(void)
{	
	int ary[4][4] = { 
	{78, 48, 78, 98},
	{99, 92, 83, 29},
	{29, 64, 83, 89},
	{34, 78, 92, 56},
	};

	int aryCol[4] = {0}, aryRow[4] = {0}, sum = 0;

	printf("다음표의 세로와 가로합, 그리고 모든 합을 구합니다.\n");
	printf("------------------------------\n");
	printf("|  %d |  %d |  %d |  %d |\n", ary[0][0], ary[0][1], ary[0][2], ary[0][3]);
	printf("|  %d |  %d |  %d |  %d |\n", ary[1][0], ary[1][1], ary[1][2], ary[1][3]);
	printf("|  %d |  %d |  %d |  %d |\n", ary[2][0], ary[2][1], ary[2][2], ary[2][3]);
	printf("|  %d |  %d |  %d |  %d |\n", ary[3][0], ary[3][1], ary[3][2], ary[3][3]);
	printf("------------------------------\n");
	
	printf("위 표의 세로와 가로합, 그리고 모든합을\n");
	printf("각각 행과 열의 마지막에 구합니다.\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			aryCol[i] += ary[i][j];
			aryRow[j] += ary[i][j];
			sum += ary[i][j];
		}
	}


	printf("------------------------------\n");
	printf("|  %d |  %d |  %d |  %d |  %d |\n", ary[0][0], ary[0][1], ary[0][2], ary[0][3], aryCol[0]);
	printf("|  %d |  %d |  %d |  %d |  %d |\n", ary[1][0], ary[1][1], ary[1][2], ary[1][3], aryCol[1]);
	printf("|  %d |  %d |  %d |  %d |  %d |\n", ary[2][0], ary[2][1], ary[2][2], ary[2][3], aryCol[2]);
	printf("|  %d |  %d |  %d |  %d |  %d |\n", ary[3][0], ary[3][1], ary[3][2], ary[3][3], aryCol[3]);
	printf("|  %d |  %d |  %d |  %d |  %d |\n", aryRow[0], aryRow[1], aryRow[2], aryRow[3], sum);
	printf("------------------------------\n");

	return 0;
}