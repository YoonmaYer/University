#include <stdio.h>

int main()
{
	short value = 0x4847; // 정수의 일부분인 16진수 코드 47은 문자 'G'
	char* p = (char*)&value;
	printf("%c %c\n", *p, *(p + 1)); // G H

	int value = 0x00110012; // 16진수 코드 0012는 10진수로 18
	short* p = (short*)&value;
	printf("%hd %hd\n", *(p + 1), *p); // 17 18
}