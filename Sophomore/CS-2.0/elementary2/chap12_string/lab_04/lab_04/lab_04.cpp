#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100] = "C 언어 ", s2[] = "사랑합니다!";

	strncat(s1, s2, sizeof(s2));

	printf("두 문자열 붙인 결과: %s", s1);
}