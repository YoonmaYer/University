#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];
	int lowNum1 = 999999999; // 가장 작은 값을 저장할 변수
	int lowNum2 = 999999999; // 두 번째로 작은 값을 저장할 변수

	for (int i = 0; i < 5; i++) {
		printf("%d번 숫자 : ", i);
		scanf("%d", &num[i]);
		if (num[i] < lowNum1) {	// 저장된 lowNum1값 보다 작다면 변경
			lowNum2 = lowNum1; // 두 번째 낮은 값으로 전달
			lowNum1 = num[i];
		}
		else if (num[i] < lowNum2) {
			// else if로 -> if 다음 확인이니 가장 낮은 값이면 위의 if문으로 들어감
			// 첫 번째부터 가장 낮은 값을 만나면 두 번째 값 처리 안되니 필요함.
			lowNum2 = num[i];
		}
	}
	
	printf("두 번째로 낮은 값은 %d입니다.\n", lowNum2);
	return 0;
}