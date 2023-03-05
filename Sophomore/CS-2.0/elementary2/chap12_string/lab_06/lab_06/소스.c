#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LINENUM 81

int main(void)
{
	int i, len;
	char line[LINENUM];

	printf("영문 문장을 입력하세요. -> \n");

	gets(line);
	len = strlen(line); //문자열의 길이 알기

	printf("위에서 입력한 문자열에서 대문자와 소문자를 반대로 변환하면 -> \n");

	for (i = 0; i < len; i++) {
		if ('A' <= line[i] && 'Z' >= line[i]) {  //대문자 찾기
			line[i] = tolower(line[i]);
		}
		else if ('a' <= line[i] && 'z' >= line[i]) {  //소문자 찾기
			line[i] = toupper(line[i]);
		}
		printf("%c", line[i]);
	}
	printf("\n");
}
