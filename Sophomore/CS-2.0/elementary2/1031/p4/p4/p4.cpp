#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];
	int lowNum1 = 999999999; // ���� ���� ���� ������ ����
	int lowNum2 = 999999999; // �� ��°�� ���� ���� ������ ����

	for (int i = 0; i < 5; i++) {
		printf("%d�� ���� : ", i);
		scanf("%d", &num[i]);
		if (num[i] < lowNum1) {	// ����� lowNum1�� ���� �۴ٸ� ����
			lowNum2 = lowNum1; // �� ��° ���� ������ ����
			lowNum1 = num[i];
		}
		else if (num[i] < lowNum2) {
			// else if�� -> if ���� Ȯ���̴� ���� ���� ���̸� ���� if������ ��
			// ù ��°���� ���� ���� ���� ������ �� ��° �� ó�� �ȵǴ� �ʿ���.
			lowNum2 = num[i];
		}
	}
	
	printf("�� ��°�� ���� ���� %d�Դϴ�.\n", lowNum2);
	return 0;
}