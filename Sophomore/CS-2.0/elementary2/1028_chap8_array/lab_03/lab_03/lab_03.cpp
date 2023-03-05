#include <stdio.h>

#define SIZE 7

int main(void)
{
	int data[SIZE] = { 3, 21, 35, 57, 24, 82, 8 };


	for (int i = 0; i < SIZE; i++)
		printf("%d ", data[i]+10);
}