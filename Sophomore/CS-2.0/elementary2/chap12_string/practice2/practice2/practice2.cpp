#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "Java";
	char source[80] = "C is a language.";

	printf("%s\n", strcpy(dest, source));
	printf("%s\n", strncpy(dest, "C#", 2)); // "C#"�� dest�� 2����Ʈ�� "C#"���� ����
	printf("%s\n", strncpy(dest, "C#", 3)); // "C#"�� dest�� 3����Ʈ�� "C#\0"���� ����

	char data[80] = "C";

	printf("%s\n", strcat(data, " is "));

	printf("%s\n", strncat(data, "a java", 2)); // 2�� ������ "a "������ ����Ǿ� ���ڿ��� "C is a"�� ��

	printf("%s\n", strcat(data, "procedural "));
	printf("%s\n", strcat(data, "language."));

	return 0;
}