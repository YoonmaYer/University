#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];

	for (int i = 0; i < 5; i++) {
		printf("%d번 숫자 : ", i);
		scanf("%d", &num[i]);
	}
	printf("--출력--\n");
	for (int i = 0; i < 5; i++) {
		printf("%d번 숫자 : %d\n", i, num[i]);
	}
	return 0;

}