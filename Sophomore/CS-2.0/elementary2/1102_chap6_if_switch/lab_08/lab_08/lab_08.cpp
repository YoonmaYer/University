#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int year = 0;
	printf("�⵵�Է�: ");
	scanf("%d", &year);

	if ((year / 4) && !(year / 100) || (year / 400))
		printf("%d ���� �����Դϴ�.", year);
	else
		printf("%d ���� ������ �ƴմϴ�.", year);

	return 0;
}