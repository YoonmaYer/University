#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "C ��� ", s2[] = "����մϴ�!";

	strncat(s1, s2, sizeof(s2));

	printf("�� ���ڿ� ���� ���: %s", s1);
}