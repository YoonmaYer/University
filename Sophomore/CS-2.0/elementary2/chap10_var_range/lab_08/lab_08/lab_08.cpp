#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number, useranswer;
int min, count = 1;
int max = 100;
 
void setNumber() { // ���� ���� �Լ�

	srand((long)time(NULL)); // �Ź� �ٸ� �õ尪 ����

	number = rand() % 100 + 1;
}

void printHead() {
	printf("1���� 100������ ������ ������ ���������ϴ�.\n");
	printf("�� ������ ���߽ʽÿ�. ��ȸ�� 5���Դϴ�. (�õ� Ƚ��: %d��) >> ", count);
}

void printHigher() {

	printf("���߾�� �� ������ �Է��� %d���� Ů�ϴ�. (�õ� Ƚ��: %d��)\n", min = useranswer,count);
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ��� >> ", min, max);
}

void printLower() {

	printf("���߾�� �� ������ �Է��� %d���� �۽��ϴ�. (�õ� Ƚ��: %d��)\n", max = useranswer,count);
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
		count++;
		if (number == useranswer) {
			printAnswer();
			break;
		}
		else if (count >= 5) {
			printf("�ִ� �õ� Ƚ���� 5ȸ ���� ������ ���Ͽ����ϴ�. ���α׷��� �����մϴ�.");
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