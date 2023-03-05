#include <stdio.h>

int main(void)
{
	const int MAX = 5;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		for (j = 0; j <= 5-i; j++)
			printf("*");
		puts(""); // puts = 문자열 출력 함수, \n 보다 더 빠르다.
	}
	
	return 0;
}