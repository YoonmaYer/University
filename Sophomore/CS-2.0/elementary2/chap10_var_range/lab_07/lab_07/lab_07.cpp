#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number, useranswer;
int min = 1;
int max = 100;

void setNumber() { // ���� ���� �Լ�

	srand((unsigned int)time(NULL)); // �Ź� �ٸ� �õ尪 ����

	number = rand() % 100 + 1;
}

void printHead() { 
	printf("1���� 100������ ������ ������ ���������ϴ�.\n");
	printf("�� ������ ���߽ʽÿ� >> ");
}

void printHigher() {
	
	printf("���߾�� �� ������ �Է��� %d���� Ů�ϴ�.", min = useranswer);
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ��� >> ", min, max);
}

void printLower() {
	
	printf("���߾�� �� ������ �Է��� %d���� �۽��ϴ�.", max = useranswer);
		printf("%d���� %d ������ ������ �ٽ� �Է��ϼ��� >> ", min, max);
}

void printAnswer() {
		printf("�����մϴ�! ������ %d(��)�����ϴ�!", number);
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