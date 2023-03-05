#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[20];
	int num2[10] = {0}; // 빈도수 저장
	int num3 = 0; // 빈도수가 가장 많은 수 저장

	printf("0에서 9까지의 정수를 입력하시오. \n");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &num[i]);
	}

	for (int j = 0; j < 20; j++) {
		num2[num[j]] += 1;
		// 입력값이 2이면 num[1]의 값에 1 추가
	}

	// 가장 큰 빈도 수 구하기
	for (int k = 1; k < 10; k++) {
		if (num2[num3] < num2[k]) {
			num3 = k;
			// 기존의 빈도 수보다 큰 값이 등장하면 최신화 시킴
		}
	}
	
	printf("0 ~ 9중 가장 많이 나온 수는 %d이고 %d번 나왔습니다.", num3, num2[num3]);

	return 0;
}