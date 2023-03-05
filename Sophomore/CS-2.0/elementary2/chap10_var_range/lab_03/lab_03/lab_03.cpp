#include<stdio.h>
#define MAXSIZE 3

int stack[MAXSIZE]; // ��������
int top = -1; // ��������

int isfull() {
	if (top >= MAXSIZE - 1) {    // stack�� �ε��� 0���� ����
		printf("��� �� �����Դϴ�.\n");
		return 1; // ������ ����
	}
	return 0;
}
void push(int data) {
	if (!isfull()) { // isfull()�Լ��� ���Ǻ��� �˻�
		top++;
		stack[top] = data; // top(�ε���)�� data(��) ����
		printf("���� ÷�� %d�� %d��(��) �����մϴ�.\n", top, data);
	}
}

int isempty() {
	if (top == -1) {
		printf("�� �����Դϴ�.\n");
		return 1;
	}
	return 0;
}

int pop() {
	if (!isempty()) {
		printf("���� ÷�� %d���� %d��(��) �����մϴ�.\n", top,stack[top]);
		return stack[top--];
	}
}

//�����Լ����� push()�Լ��� ȣ���� �� ������ top�� �� ����

int main() {
	push(3);
	push(5);
	pop();
	push(9);
	push(1);
	push(7);

	return 0;
}