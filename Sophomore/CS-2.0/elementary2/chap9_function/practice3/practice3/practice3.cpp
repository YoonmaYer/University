#include <stdio.h>

void increment(int ary[], int n, int SIZE); // �Լ� increment�� �Լ�����
void printary(int data[], int SIZE); // �Լ� printary�� �Լ�����

int main(void)
{
	int data[] = { 4, 7, 2, 3, 5 };
	int aryLength = sizeof(data) / sizeof(int);
	int inc = 3;

	printary(data, aryLength); // �迭 ����� ���� printary() �Լ� ȣ��
	// �迭 ���Ҹ� ��� 3�� ������Ű�� ���� increment() �Լ� ȣ��
	increment(data, inc, aryLength);
	printf("�迭 ���ҿ� ���� %d�� ���ڸ� ���� ���: \n", inc);
	printary(data, aryLength); // ����� �˾� ���� printary() �Լ� ȣ��
	
	return 0;
}

// �迭ũ�Ⱑ SIZE�� �迭 ary�� ��� ���Ҹ� n��ŭ ������Ű�� �Լ�
void increment(int ary[], int n, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		ary[i] += n;
}

// �迭 ũ�Ⱑ SIZE�� �迭 ary�� ��� ���Ҹ� ����ϴ� �Լ�
void printary(int data[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}