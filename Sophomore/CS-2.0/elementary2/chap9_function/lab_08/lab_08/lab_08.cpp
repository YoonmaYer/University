#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int guess, input, count = 0;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1���� %d ������ ���ڸ� ���߽ÿ�. \n", MAX);
	printf("7���� ��ȸ�� �帳�ϴ�. >> ");
	
	do
	{
		scanf("%d", &input);
		if (input > guess)
		{
			printf("���������� Ů�ϴ�.\n"); count++;
		}
		else if (input < guess)
		{
			printf("���������� �۽��ϴ�.\n"); count++;
		}
		else
		{
			printf("�����Դϴ�.\n");
			break;
		}
		if (count == 7)
		{
			printf("��� ��ȸ�� �� ���̽��ϴ�.\n");
			printf("������ %d (��)�����ϴ�.", guess);
			break;
		}
	} while (count < 8);

	return 0;
}