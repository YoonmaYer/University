#include <stdio.h>
#include<stdlib.h> // rand(), srand()
#include<time.h> // time()

#define MAX 100

int main(void)
{
	long seconds = (long)time(NULL);
	srand(seconds);

	printf("1 ~ %5d 사이의 난수 8개:\n", MAX);
	for (int i = 0; i < 8; i++)
		printf("%5d ", rand() % MAX + 1);
	puts("");

	return 0;
}