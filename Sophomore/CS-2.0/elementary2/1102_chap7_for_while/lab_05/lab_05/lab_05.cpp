#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int dan = 0;
	printf("출력할 구구단 2 ~ 9 사이의 정수 입력 >> ");
	scanf("%d", &dan);

	for (int j = 1; j <= 9; j++) {
		printf("%d * %d = %d ", dan, j, dan * j);
	}
		return 0;
}