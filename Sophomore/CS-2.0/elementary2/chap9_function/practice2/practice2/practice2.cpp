#include <stdio.h>

int sumary(int ary[], int SIZE);

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };

	int arySize = sizeof(point);
	printf("���ο��� �迭 ��üũ��: %d\n", arySize);
	int aryLength = arySize / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
		sum += point[i];

	printf("���ο��� ���� ���� %d\n", sum);
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(point, aryLength));
	printf("�Լ� sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength)); // index[0]�� ���� �����ϰڴ�.

	return 0;
}

int sumary(int ary[], int SIZE)
{
	int sum = 0;
	printf("�Լ����� �迭 ��üũ��: %d\n", (int)sizeof(ary)); // �Լ��� ȣ���� �������� �迭 ��ü ũ��, ������ �� �� ����, ���� �ý����� ������ �߿��� ���� ū �޸� ����� �����͹���
	for (int i = 0; i < SIZE; i++)
	{
		sum += ary[i];
	}
	return sum;
}