#include <stdio.h>

int main()
{
	int i, count = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
			continue;

		printf("%3d", i);
		count++;

		if (count % 10 == 0)
			printf("\n");
	}
	return 0;
}