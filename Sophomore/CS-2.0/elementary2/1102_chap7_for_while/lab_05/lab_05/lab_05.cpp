#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int dan = 0;
	printf("����� ������ 2 ~ 9 ������ ���� �Է� >> ");
	scanf("%d", &dan);

	for (int j = 1; j <= 9; j++) {
		printf("%d * %d = %d ", dan, j, dan * j);
	}
		return 0;
}