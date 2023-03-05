#include <stdio.h>

int main(void)
{
	int x = 500, y = 700, dummy;
	printf("%d %d\n", x, y);

	int* px = &x, * py = &y, * pd = &dummy;

	// 변수 x와 y, dummy를 사용하지 않고, *px, *py, *pd를 사용해 두 변수를 서로 교환
	*pd = *px;// 변수 dummy에 x를 저장
	*px = *py;
	*py = *pd;// 변수 n에 dummy를 저장

	printf("%d %d\n", x, y);

	return 0;
}