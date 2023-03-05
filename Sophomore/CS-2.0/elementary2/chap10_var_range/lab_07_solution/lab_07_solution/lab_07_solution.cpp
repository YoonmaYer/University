#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void setNumber();
void printHead();
void printHigher(int);
void printLower(int);
void printAnswer(int);

int num = 0;
int min = 1;
int max = 100;
int trycount = 0;
int main(void)
{
	int guess;
	setNumber();
	printHead();
	while (1) {
		scanf("%d", &guess);
		trycount++;
		if (num > guess)
			printHigher(guess);
		else if (num < guess)
			printLower(guess);
		else {
			printAnswer(guess);
			break;
		}
	}

	return 0;
}
void setNumber()
{
	srand(time(NULL));
	num = rand() % 100 + 1;
}
void printHead()
{
	printf("1~100사이의 정수가 선택되었습니다\n"
		"이 정수를 맞춰보세요 : ");
}
void printHigher(int guess)
{
	printf("%d보다 큰 정수 입니다(시도 횟수 %d번)\n", min = guess, trycount);
	printf("%d~%d사이의 정수를 입력하세요 : ", min, max);
}
void printLower(int guess)
{
	printf("%d보다 작은 정수 입니다(시도 횟수 %d번)\n", max = guess, trycount);
	printf("%d~%d사이의 정수를 입력하세요 : ", min, max);
}
void printAnswer(int guess)
{
	printf("정답입니다. 총 %d번 만에 선택된 수 %d를 맞췄습니다.\n", trycount, guess);
}