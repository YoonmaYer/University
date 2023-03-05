#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1, num2 = 0.0; // double형 변수 선언 및 초기화
	int* p1 = (int*)&num1; // double에서 int로 형변환
	int* p2 = (int*)&num2;

	printf("두 정수 입력: ");
	scanf("%d %d", p1, p2);


	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
	printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
	printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2);
	printf("%d %% %d = %d", *p1, *p2, *p1 % * p2);
}