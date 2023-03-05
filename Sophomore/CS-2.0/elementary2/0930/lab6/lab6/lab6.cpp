#include <stdio.h>

int main()
{
	char input;

	printf("문자 입력");
	// getchar 함수로 문자 입력 받기
	input = getchar();

	// putchar는 input을 그대로, printf는 %c로
	putchar(input);
	printf("\n%c\n", input);

	// %d, %o, %x를 이용하여 각 진수로 출력
	printf("10진수: %d, 8진수: %o, 16진수: %x\n", input, input, input);

	return 0;
}