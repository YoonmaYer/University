#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[20] = { 0, };
	int ary_num = 0; // 빈도수가 가장 많은 수 저장
	int ary_cnt[10] = { 0, }; // 빈도수 저장

	printf("0에서 9까지의 정수를 입력하시오.\n");

	for (int i = 0; i <= 20; i++) // ary[20]의 원소 입력 받기 및 출력하는 반복문
	{
		scanf("%d", &ary[i]);
		printf("%d ", ary[i]);
	}
	printf("\n");
	
	// ary_cnt(빈도수를 저장하는 배열 변수)의 배열 인덱스에
	// ary의 배열 인덱스를 저장
	for (int j = 0; j < 20; j++) {
		ary_cnt[ary[j]] += 1;
	}

	// 빈도수가 가장 큰 수를 구하는 반복문
	// 0~9까지 계속 비교해서 빈도수 큰 수를 ary_num에 저장
	for (int k = 1; k < 10; k++)
	{
		if (ary_cnt[ary_num] < ary_cnt[k]) {
			ary_num = k;
		}
	}

	// 결과 출력
	printf("0 ~ 9 중 가장 많이 나온 수는 %d 이고, %d번 나왔습니다.", ary_num, ary_cnt);

	return 0;
}