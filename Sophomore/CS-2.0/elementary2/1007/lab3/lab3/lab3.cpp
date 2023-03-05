#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height, weight;
	double bmi;

	printf("신장과 몸무게를 입력하시오: ");
	scanf("%lf %lf", &height, &weight);
	
	height = height / 100;
	bmi = weight / (height * height);

	if (bmi >= 40)
		printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf 고도비만",height,weight,bmi);
	else if (bmi < 40 && bmi >= 35)
		printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf 중증도 비만", height, weight, bmi);
	else if (bmi < 35 && bmi >= 30)
		printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf 비만", height, weight, bmi);
	else if (bmi < 30 && bmi >= 25)
		printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf 과체중",height, weight, bmi);
	else if (bmi < 25 && bmi >= 18.5)
		printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf 정상",height, weight, bmi);
	else if (bmi < 18.5)
		printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf 저체중",height, weight, bmi);

	else
		printf("error");

	return 0;



}