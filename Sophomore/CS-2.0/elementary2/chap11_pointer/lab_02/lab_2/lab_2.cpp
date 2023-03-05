#include <stdio.h>

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p;

	p = &a[2]; // 3

	printf("%d %d %d %d %d", *(p - 2), *(p - 1), *p, *(p + 1), *(p + 2)); // 1 2 3 4 5
	printf("\n");
	printf("%d %d %d %d %d", p[-2], p[-1], p[0], p[1], p[2]); // 배열의 첨자 활용, 1 2 3 4 5
	
	return 0;
}