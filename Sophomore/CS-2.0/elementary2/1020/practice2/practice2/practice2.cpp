#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	double num1, num2 = 0;
	char oper;

	printf("3.4+4.5�� ���� �� �Ǽ��� �����ڸ� �ٿ��� �Է� >> ");
	scanf("%lf%c%lf",&num1, &oper, &num2);

	if (oper == '+')
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
	else if (oper == '-')
		printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
	else if (oper == '/')
		printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
	else if (oper == '*')
		printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);

	else
		printf("error");

	return 0;
}