#include <stdio.h>

int main()
{
	short value = 0x4847; // ������ �Ϻκ��� 16���� �ڵ� 47�� ���� 'G'
	char* p = (char*)&value;
	printf("%c %c\n", *p, *(p + 1)); // G H

	int value = 0x00110012; // 16���� �ڵ� 0012�� 10������ 18
	short* p = (short*)&value;
	printf("%hd %hd\n", *(p + 1), *p); // 17 18
}