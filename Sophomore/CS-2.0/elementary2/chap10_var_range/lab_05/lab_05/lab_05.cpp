#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 2

int user;

// 전역변수는 상수로만 선언

int sys() { // 난수 추출 함수

	int random;

	srand((long)time(NULL));

	random = rand() % MAX;

	
}

void usercasescissor() {
	if (user == 0 && sys() == 1)	// case user 0(가위)
		printf("시스템의 승리입니다.");
	else if (user == 0 && sys() == 2)
		printf("당신의 승리입니다.");
	else if (user == 0 && sys() == 0)
		printf("비겼습니다.");
}

void usercaserock() {
	if (user == 1 && sys() == 0)	// case user 1(바위)
		printf("당신의 승리입니다.");
	else if (user == 1 && sys() == 1)
		printf("비겼습니다.");
	else if (user == 1 && sys() == 2)
		printf("시스템의 승리입니다.");
}

void usercasepaper() {
	if (user == 2 && sys() == 0)	// case user 2(보)
		printf("시스템의 승리입니다.");
	else if (user == 2 && sys() == 1)
		printf("당신의 승리입니다.");
	else if (user == 2 && sys() == 2)
		printf("비겼습니다.");
}


int main() {

	printf("가위(0), 바위(1), 보(2) 중에서 하나 입력 -> ");
	scanf("%d", &user);

	printf("당신은 %s이고,",user == 0 ? "가위" : user == 1 ? "바위" : "보"); // user의 case에 따라 맞는 문자 반환
	printf("시스템은 %s입니다.\n", sys() == 0 ? "가위" : sys() == 1 ? "바위" : "보"); // sys()의 case에 따라 맞는 문자 반환
	
	if (user == 0)
		usercasescissor();
	else if (user == 1)
		usercaserock();
	else
		usercasepaper();

	return 0;

	}