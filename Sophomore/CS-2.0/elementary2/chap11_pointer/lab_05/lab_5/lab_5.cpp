#include <stdio.h>

int main(void)
{
	int arr[3][4] = { {11, 22, 33, 44},
					  {55, 66, 77, 88},
					  {11 ,66, 77 ,44} };
	
	int* p = &arr[0][0];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("arr[%d][%d] = %d ", i, j, *p++);
		}
		printf("\n");
	}

}