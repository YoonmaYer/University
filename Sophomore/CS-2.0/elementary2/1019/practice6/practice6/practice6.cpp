#define _CRT_SECURE_NO_WARNINGS // scanf 쓸때는 이걸 첫줄에 먼저 정의해줘야함
#include<stdio.h>
#define PI 3.141592


int main(void) {
	double r;
	printf("원 반지름 입력: ");
	scanf("%lf", &r);
	printf("원 반지름: %.4lf", r);
	printf("원 면적: %.4lf\n", r  * r *PI);
	printf("원 둘레: %.4lf", 2 * r * PI);

	return 0;
}