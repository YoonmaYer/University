#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];

	for (int i = 0; i < 5; i++) {
		printf("%d�� ���� : ", i);
		scanf("%d", &num[i]);
	}
	printf("--���--\n");
	for (int i = 0; i < 5; i++) {
		printf("%d�� ���� : %d\n", i, num[i]);
	}
	return 0;

}