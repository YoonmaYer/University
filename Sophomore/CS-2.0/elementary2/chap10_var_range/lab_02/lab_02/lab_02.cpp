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

//�����Լ����� push()�Լ��� ȣ���� �� ������ top�� �� ����

int main()
{
	push(3);
	push(5);
	push(9);
	push(1);
	
	return 0;
}