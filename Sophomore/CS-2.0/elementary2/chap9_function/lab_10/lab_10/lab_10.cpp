#include <stdio.h>

int fact(int ,int);

int main()
{
	int x = 6, y = 10;
	printf("6�� 0�º��� 10�±��� ���ϴ� ���α׷��Դϴ�.\n");
	fact(x, y);
	return 0;
}

int fact(int x, int y)
{
	int sum = 0;

	if (y >= 1) // Ż�� ����
	{
		sum = x * fact(x, y - 1); // ȣ���
	}
	else
	{
		sum = 1;
	}
	printf("%d�� %d���� %d �Դϴ�.\n", x, y, sum);
	return sum; // ó����
}