#include <stdio.h>

int sum(int n);

int main(void)
{
	for (int i = 1; i <= 10; i++) 
			printf("%d부터 %d까지의 합: %d\n",1, i, sum(i));
	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;

	return n + sum(n - 1);
}