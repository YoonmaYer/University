#include <stdio.h>

int main(void)
{
	const int MAX = 5;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		for (j = 0; j <= 5-i; j++)
			printf("*");
		puts(""); // puts = ���ڿ� ��� �Լ�, \n ���� �� ������.
	}
	
	return 0;
}