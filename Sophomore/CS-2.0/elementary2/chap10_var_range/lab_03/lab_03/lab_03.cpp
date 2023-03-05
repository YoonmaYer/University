#include<stdio.h>
#define MAXSIZE 3

int stack[MAXSIZE]; // 전역변수
int top = -1; // 전역변수

int isfull() {
	if (top >= MAXSIZE - 1) {    // stack의 인덱스 0부터 시작
		printf("모두 찬 스택입니다.\n");
		return 1; // 비정상 종료
	}
	return 0;
}
void push(int data) {
	if (!isfull()) { // isfull()함수의 조건부터 검사
		top++;
		stack[top] = data; // top(인덱스)에 data(값) 저장
		printf("스택 첨자 %d에 %d을(를) 저장합니다.\n", top, data);
	}
}

int isempty() {
	if (top == -1) {
		printf("빈 스택입니다.\n");
		return 1;
	}
	return 0;
}

int pop() {
	if (!isempty()) {
		printf("스택 첨자 %d에서 %d을(를) 삭제합니다.\n", top,stack[top]);
		return stack[top--];
	}
}

//메인함수에서 push()함수가 호출이 될 때마다 top의 값 증가

int main() {
	push(3);
	push(5);
	pop();
	push(9);
	push(1);
	push(7);

	return 0;
}