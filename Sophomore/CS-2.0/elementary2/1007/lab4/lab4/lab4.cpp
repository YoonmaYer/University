#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int gender;
	double weight, height, bmi;

	printf("������ ���� �Է��ϼ���. 1(����), 2(����): ");
	scanf("%d", &gender);
	printf("����� �����Ը� �Է��ϼ���: ");
	scanf("%d %d", &height, &weight);

	height = height / 100;

	if (gender == 1) {
		bmi = (weight / (height * height * 22) * 100);
	}
	else {
		bmi = (weight / (height * height * 21) * 100);
	}
	if (bmi > 20) {
		printf("���� ����: %.2lf, ü��: %.2lf, ǥ�� ü��: %.2lf\n",height, weight, height * height * 22);
		printf("������: %.2lf, ����: ��",bmi);
	}
	else if (bmi > 10 && bmi <= 20) {
		printf("���� ����: %.2lf, ü��: %.2lf, ǥ�� ü��: %.2lf\n", height, weight, height * height * 22);
		printf("������: %.2lf, ����: ü�� ����",bmi);
	}
	else if (bmi >= 10 && bmi >= -10) {
		printf("���� ����: %.2lf, ü��: %.2lf, ǥ�� ü��: %.2lf\n", height, weight, height * height * 22);
		printf("������: %.2lf, ����: ����",bmi);
	}
	else if (bmi > -10) {
		printf("���� ����: %.2lf, ü��: %.2lf, ǥ�� ü��: %.2lf\n", height, weight, height * height * 22);
		printf("������: %.2lf, ����: ��ü��",bmi);
	}
	return 0;
}