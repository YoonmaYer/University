#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "Java";
	char source[80] = "C is a language.";

	printf("%s\n", strcpy(dest, source));
	printf("%s\n", strncpy(dest, "C#", 2)); // "C#"을 dest의 2바이트인 "C#"까지 복사
	printf("%s\n", strncpy(dest, "C#", 3)); // "C#"을 dest의 3바이트인 "C#\0"까지 복사

	char data[80] = "C";

	printf("%s\n", strcat(data, " is "));

	printf("%s\n", strncat(data, "a java", 2)); // 2개 문자인 "a "까지만 연결되어 문자열은 "C is a"가 됨

	printf("%s\n", strcat(data, "procedural "));
	printf("%s\n", strcat(data, "language."));

	return 0;
}