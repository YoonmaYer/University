#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printnum(int a, int b, int c);

int main(void)
{	
	int num1, num2, num3 = 0;
	printf("세 개의 정수 중 가장 큰 정수를 출력합니다.\n");
	printf("정수 3개 입력 >>> ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printnum(num1, num2, num3);
	
}

int printnum(int a, int b, int c)
{
	int max = 0;
	if (a > b && a > c) {        //a 가 가장 큰 경우
		max = a;
	}
	else if (b > c) {    // b가 가장 큰 경우 
		max = b;
	}
	else {    //c 가 가장 큰 경우
		max = c;
	}
	printf("입력한 세개 정수 %d, %d, %d 중에서 가장 큰 정수는 %d 입니다.", a,b,c,max);

	return (max);
}
