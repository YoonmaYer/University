#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, sum = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("1에서 %d까지의 합: %d", num, sum);
	return 0;
}