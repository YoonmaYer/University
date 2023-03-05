#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int toint(char* strint);

int main(void)
{
	char line[81];

	printf("정수를 하나 입력하세요. -> ");

	fgets(line,81,stdin);
	printf("%s\n\n", line);

	printf("먼저 함수 atoi()를 이용하여 입력한 문자열을 "
		"정수로 바꾸면 -> %d\n", atoi(line));
	printf("여기서 만든 함수를 이용하여 입력한 문자열을 "
		"정수로 바꾸면 -> %d\n", toint(line));

}

int toint(char* strint)
{
	int i = 0, cnt = 0;
	int sum = 0, x = 0;

	while (isdigit(strint[i++])) {
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		sum += (strint[i] - '0') * (int)pow(10, cnt - i - 1);
	}

	return sum;
}