#include<stdio.h>
#define PI 3.14
#
/*
반지름: radius
면적: circleArea
둘레: circleLength
*/

int main(void) {
	double radius = 5.37;
	double circleArea = radius * radius * PI;
	double circleLength = 2 * PI * radius;

	printf("원 반지름: %lf\n", radius);
	printf("원 면적: %lf\n", circleArea);
	printf("원 둘레: %lf\n", circleLength);

	return 0;
}