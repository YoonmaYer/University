#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getsum(int max);
int sum = 0;

int main()
{
	int num = 0;
	printf("1에서 n까지의 합을 구할 정수 n을 입력하시오 >> ");
	scanf("%d", &num);
	
	int total = getsum(num);
	printf("1에서 n까지의 합: %d", total);
}

int getsum(int max)
{
	for (int i = 0; i <= max; i++)
		sum += i;

	return sum;
}