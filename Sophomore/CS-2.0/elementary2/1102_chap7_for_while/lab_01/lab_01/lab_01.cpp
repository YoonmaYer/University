#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, sum = 0;
	printf("���� ���� �Է�: ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("1���� %d������ ��: %d", num, sum);
	return 0;
}