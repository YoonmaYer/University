#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height, weight;
	double bmi;

	printf("����� �����Ը� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &height, &weight);
	
	height = height / 100;
	bmi = weight / (height * height);

	if (bmi >= 40)
		printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ����",height,weight,bmi);
	else if (bmi < 40 && bmi >= 35)
		printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ������ ��", height, weight, bmi);
	else if (bmi < 35 && bmi >= 30)
		printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ��", height, weight, bmi);
	else if (bmi < 30 && bmi >= 25)
		printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ��ü��",height, weight, bmi);
	else if (bmi < 25 && bmi >= 18.5)
		printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ����",height, weight, bmi);
	else if (bmi < 18.5)
		printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ��ü��",height, weight, bmi);

	else
		printf("error");

	return 0;



}