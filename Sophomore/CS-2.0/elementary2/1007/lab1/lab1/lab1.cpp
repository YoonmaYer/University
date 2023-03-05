#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	char c;


	printf("3.4+4.5와 같이 두 실수와 연산자를 붙여서 입력 >> ");
	scanf("%lf %c %lf", &a, &c, &b);

	if (c == '+') 
		printf("%lf + %lf = %lf", a, b, a + b);
	
	else if (c == '-') 
		printf("%lf - %lf = %lf", a, b, a - b);
	
	else if (c == '*') 
		printf("%lf * %lf = %lf", a, b, a * b);
	
	else if (c == '/') 
		printf("%lf / %lf = %lf", a, b, a / b);
	

	else
		printf("잘못된 입력입니다.");

	return 0;
}