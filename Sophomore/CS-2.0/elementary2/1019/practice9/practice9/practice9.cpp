#include<stdio.h>

int main(void) {
	char c;
	printf("input char: ");
	c = getchar();
	putchar(c);

	printf("\n%d %#o %#x", c, c, c);

	return 0;
}