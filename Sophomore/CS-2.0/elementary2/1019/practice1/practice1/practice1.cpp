#include<stdio.h>
#define PI 3.14
#
/*
������: radius
����: circleArea
�ѷ�: circleLength
*/

int main(void) {
	double radius = 5.37;
	double circleArea = radius * radius * PI;
	double circleLength = 2 * PI * radius;

	printf("�� ������: %lf\n", radius);
	printf("�� ����: %lf\n", circleArea);
	printf("�� �ѷ�: %lf\n", circleLength);

	return 0;
}