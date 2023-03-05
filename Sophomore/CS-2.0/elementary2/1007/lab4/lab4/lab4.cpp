#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int gender;
	double weight, height, bmi;

	printf("성별을 먼저 입력하세요. 1(남자), 2(여자): ");
	scanf("%d", &gender);
	printf("신장과 몸무게를 입력하세요: ");
	scanf("%d %d", &height, &weight);

	height = height / 100;

	if (gender == 1) {
		bmi = (weight / (height * height * 22) * 100);
	}
	else {
		bmi = (weight / (height * height * 21) * 100);
	}
	if (bmi > 20) {
		printf("현재 신장: %.2lf, 체중: %.2lf, 표준 체중: %.2lf\n",height, weight, height * height * 22);
		printf("비만지수: %.2lf, 판정: 비만",bmi);
	}
	else if (bmi > 10 && bmi <= 20) {
		printf("현재 신장: %.2lf, 체중: %.2lf, 표준 체중: %.2lf\n", height, weight, height * height * 22);
		printf("비만지수: %.2lf, 판정: 체중 과다",bmi);
	}
	else if (bmi >= 10 && bmi >= -10) {
		printf("현재 신장: %.2lf, 체중: %.2lf, 표준 체중: %.2lf\n", height, weight, height * height * 22);
		printf("비만지수: %.2lf, 판정: 정상",bmi);
	}
	else if (bmi > -10) {
		printf("현재 신장: %.2lf, 체중: %.2lf, 표준 체중: %.2lf\n", height, weight, height * height * 22);
		printf("비만지수: %.2lf, 판정: 저체중",bmi);
	}
	return 0;
}