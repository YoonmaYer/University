#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	char c;


	printf("3.4+4.5�� ���� �� �Ǽ��� �����ڸ� �ٿ��� �Է� >> ");
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
		printf("�߸��� �Է��Դϴ�.");

	return 0;
}