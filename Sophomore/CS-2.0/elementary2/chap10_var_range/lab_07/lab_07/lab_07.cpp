#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number, useranswer;
int min = 1;
int max = 100;

void setNumber() { // 난수 추출 함수

	srand((unsigned int)time(NULL)); // 매번 다른 시드값 생성

	number = rand() % 100 + 1;
}

void printHead() { 
	printf("1에서 100까지의 무작위 정수가 정해졌습니다.\n");
	printf("이 정수를 맞추십시오 >> ");
}

void printHigher() {
	
	printf("맞추어야 할 정수가 입력한 %d보다 큽니다.", min = useranswer);
	printf("%d에서 %d 사이의 정수를 다시 입력하세요 >> ", min, max);
}

void printLower() {
	
	printf("맞추어야 할 정수가 입력한 %d보다 작습니다.", max = useranswer);
		printf("%d에서 %d 사이의 정수를 다시 입력하세요 >> ", min, max);
}

void printAnswer() {
		printf("축하합니다! 정답은 %d(이)였습니다!", number);
}

int main() {
	setNumber();
	printHead();

	while (1) {
		scanf("%d", &useranswer);
		
		if (number == useranswer) {
			printAnswer();
			break;
		}
		else if (number > useranswer) {
			printHigher();
		}
		else if (number < useranswer) {
			printLower();
		}
		else
			printf("error");
	}
	return 0;
}