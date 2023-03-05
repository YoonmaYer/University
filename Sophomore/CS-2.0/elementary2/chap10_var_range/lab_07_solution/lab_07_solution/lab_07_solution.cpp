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
	printf("1~100������ ������ ���õǾ����ϴ�\n"
		"�� ������ ���纸���� : ");
}
void printHigher(int guess)
{
	printf("%d���� ū ���� �Դϴ�(�õ� Ƚ�� %d��)\n", min = guess, trycount);
	printf("%d~%d������ ������ �Է��ϼ��� : ", min, max);
}
void printLower(int guess)
{
	printf("%d���� ���� ���� �Դϴ�(�õ� Ƚ�� %d��)\n", max = guess, trycount);
	printf("%d~%d������ ������ �Է��ϼ��� : ", min, max);
}
void printAnswer(int guess)
{
	printf("�����Դϴ�. �� %d�� ���� ���õ� �� %d�� ������ϴ�.\n", trycount, guess);
}