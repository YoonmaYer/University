#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int guess, input = 0;

	srand((long)time(NULL)); // �ð��� ���� �ٸ� ���� �߻�
	guess = rand() % MAX + 1; // 12������ �������� ~~~

	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������. : ");

	while (scanf("%d", &input))
	{
		if (input > guess)
			printf("�Է��� �� %d���� �����ϴ�. �ٽ� �Է��ϼ���. : ", input);
		else if (input < guess)
			printf("�Է��� �� %d���� Ů�ϴ�. �ٽ� �Է��ϼ���. : ",input);
		else
		{
			puts("�����Դϴ�.");
			break;
		}
	}
	return 0;
}