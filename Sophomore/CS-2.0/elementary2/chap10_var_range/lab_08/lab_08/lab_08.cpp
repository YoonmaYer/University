#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number, useranswer;
int min, count = 1;
int max = 100;
 
void setNumber() { // 난수 추출 함수

	srand((long)time(NULL)); // 매번 다른 시드값 생성

	number = rand() % 100 + 1;
}

void printHead() {
	printf("1에서 100까지의 무작위 정수가 정해졌습니다.\n");
	printf("이 정수를 맞추십시오. 기회는 5번입니다. (시도 횟수: %d번) >> ", count);
}

void printHigher() {

	printf("맞추어야 할 정수가 입력한 %d보다 큽니다. (시도 횟수: %d번)\n", min = useranswer,count);
	printf("%d에서 %d 사이의 정수를 다시 입력하세요 >> ", min, max);
}

void printLower() {

	printf("맞추어야 할 정수가 입력한 %d보다 작습니다. (시도 횟수: %d번)\n", max = useranswer,count);
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
		count++;
		if (number == useranswer) {
			printAnswer();
			break;
		}
		else if (count >= 5) {
			printf("최대 시도 횟수인 5회 동안 맞추지 못하였습니다. 프로그램을 종료합니다.");
			break;
		}
		else if (number > useranswer) {
			printHigher();
		}
		else if (number < useranswer) {
			printLower();
		}
	}
	return 0;
}