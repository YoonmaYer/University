#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intpow(int m, int n); // 함수 선언

int main(void)
{
	int m, n;

	printf("정수 m을 n번 제곱합니다.\n");
	printf("정수 m n을 입력 >>> ");
	scanf("%d %d", &m, &n);

	// 함수 호출
	printf("\n%d의 %d 제곱은 %d입니다. \n", m, n, intpow(m,n));

	return 0;
}

int intpow(int m, int n) // 함수 정의 
{
	int mult = 1, i = 1;
	for (i = 1; i <= n; i++) {
		mult *= m;
	}
	return mult;
}