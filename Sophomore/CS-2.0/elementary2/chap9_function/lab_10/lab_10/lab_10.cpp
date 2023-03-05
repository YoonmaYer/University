#include <stdio.h>

int fact(int ,int);

int main()
{
	int x = 6, y = 10;
	printf("6의 0승부터 10승까지 구하는 프로그램입니다.\n");
	fact(x, y);
	return 0;
}

int fact(int x, int y)
{
	int sum = 0;

	if (y >= 1) // 탈출 조건
	{
		sum = x * fact(x, y - 1); // 호출부
	}
	else
	{
		sum = 1;
	}
	printf("%d의 %d승은 %d 입니다.\n", x, y, sum);
	return sum; // 처리부
}