#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	do
	{
		printf("[0]종료 [1]아메리카노 [2]카페라떼 [3]카푸치노 \n");
		printf("주문할 커피 또는 종료(0)를 입력 >> ");
		scanf("%d", &input);

		if (input > 4)
			printf("잘못된 주문입니다. 다시 주문해 주십시오.\n");
	} while (input != 0); // while (input)
	printf("사용해 주셔서 감사합니다.");

	return 0;
}