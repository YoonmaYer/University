#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++){
		printf("*");
		
		for (int j = 0; i>j; j++)
			printf("*");
		printf("\n");

	}
	return 0;
}