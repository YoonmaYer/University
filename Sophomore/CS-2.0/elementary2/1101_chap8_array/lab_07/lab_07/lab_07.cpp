#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[20];
	int num2[10] = {0}; // �󵵼� ����
	int num3 = 0; // �󵵼��� ���� ���� �� ����

	printf("0���� 9������ ������ �Է��Ͻÿ�. \n");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &num[i]);
	}

	for (int j = 0; j < 20; j++) {
		num2[num[j]] += 1;
		// �Է°��� 2�̸� num[1]�� ���� 1 �߰�
	}

	// ���� ū �� �� ���ϱ�
	for (int k = 1; k < 10; k++) {
		if (num2[num3] < num2[k]) {
			num3 = k;
			// ������ �� ������ ū ���� �����ϸ� �ֽ�ȭ ��Ŵ
		}
	}
	
	printf("0 ~ 9�� ���� ���� ���� ���� %d�̰� %d�� ���Խ��ϴ�.", num3, num2[num3]);

	return 0;
}