#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printnum(int a, int b, int c);

int main(void)
{	
	int num1, num2, num3 = 0;
	printf("�� ���� ���� �� ���� ū ������ ����մϴ�.\n");
	printf("���� 3�� �Է� >>> ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printnum(num1, num2, num3);
	
}

int printnum(int a, int b, int c)
{
	int max = 0;
	if (a > b && a > c) {        //a �� ���� ū ���
		max = a;
	}
	else if (b > c) {    // b�� ���� ū ��� 
		max = b;
	}
	else {    //c �� ���� ū ���
		max = c;
	}
	printf("�Է��� ���� ���� %d, %d, %d �߿��� ���� ū ������ %d �Դϴ�.", a,b,c,max);

	return (max);
}
