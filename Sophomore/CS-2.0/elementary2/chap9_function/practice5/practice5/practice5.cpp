#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int guess, input = 0;

	srand((long)time(NULL)); // 시간에 따라 다른 난수 발생
	guess = rand() % MAX + 1; // 12라인의 영향으로 ~~~

	printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX);
	printf("이 정수는 무엇일까요? 입력해 보세요. : ");

	while (scanf("%d", &input))
	{
		if (input > guess)
			printf("입력한 수 %d보다 적습니다. 다시 입력하세요. : ", input);
		else if (input < guess)
			printf("입력한 수 %d보다 큽니다. 다시 입력하세요. : ",input);
		else
		{
			puts("정답입니다.");
			break;
		}
	}
	return 0;
}