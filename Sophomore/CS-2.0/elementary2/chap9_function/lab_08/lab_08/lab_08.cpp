#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int guess, input, count = 0;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1에서 %d 사이의 숫자를 맞추시오. \n", MAX);
	printf("7번의 기회를 드립니다. >> ");
	
	do
	{
		scanf("%d", &input);
		if (input > guess)
		{
			printf("랜덤값보다 큽니다.\n"); count++;
		}
		else if (input < guess)
		{
			printf("랜덤값보다 작습니다.\n"); count++;
		}
		else
		{
			printf("정답입니다.\n");
			break;
		}
		if (count == 7)
		{
			printf("모든 기회를 다 쓰셨습니다.\n");
			printf("정답은 %d (이)였습니다.", guess);
			break;
		}
	} while (count < 8);

	return 0;
}