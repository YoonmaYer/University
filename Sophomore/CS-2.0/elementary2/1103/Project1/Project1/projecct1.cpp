#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main() {
	int ary[SIZE];
	int maxary = ary[0];
	int minary = ary[0];
	int sum = 0;
	printf("다섯개의 숫자를 입력하시오: ");
	
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &ary[i]);
		printf("%d ", ary[i]);

		if (ary[i] > maxary)
			maxary = ary[i];
		if (ary[i] < minary)
			minary = ary[i];
	}
	for (int j = 0; j < ary[j]; j++) {
		sum += ary[j];
	}
	printf("\n");
	printf("최대값: %d\n", maxary);
	printf("최소값: %d\n", minary);
	printf("총합: %d", sum);
	return 0;

}