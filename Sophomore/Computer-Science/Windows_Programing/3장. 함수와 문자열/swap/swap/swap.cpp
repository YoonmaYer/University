﻿#include <stdio.h>

void swap(int& x, int& y) // 매개변수를 참조자로 변경
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a = 100, b = 200;

	printf("a=%d b=%d\n", a, b);
	swap(a, b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}