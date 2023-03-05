#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define MAX 100

int testNum(int input);
int guess;

int main(void)
{
	int input;// 지역변수 선언

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1에서 %d 사이까지의 정수 하나가 결정되었다. \n", MAX);
	printf("이 정수는 무엇인가? >> ");

	while (scanf("%d", &input)) {
		switch (testNum(input))
		{
		case 0:
			puts("정답입니다.");
			break;
		case -1:
			printf("입력한 수보다 작습니다. 다시 입력하세요: ");
			break;
		case 1:
			printf("입력한 수보다 큽니다. 다시 입력하세요: ");
			break;
		}
	}
	return 0;
}