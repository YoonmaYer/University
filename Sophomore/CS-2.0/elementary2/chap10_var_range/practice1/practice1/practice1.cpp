#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define MAX 100

int testNum(int input);
int guess;

int main(void)
{
	int input;// �������� ����

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1���� %d ���̱����� ���� �ϳ��� �����Ǿ���. \n", MAX);
	printf("�� ������ �����ΰ�? >> ");

	while (scanf("%d", &input)) {
		switch (testNum(input))
		{
		case 0:
			puts("�����Դϴ�.");
			break;
		case -1:
			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���: ");
			break;
		case 1:
			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���: ");
			break;
		}
	}
	return 0;
}