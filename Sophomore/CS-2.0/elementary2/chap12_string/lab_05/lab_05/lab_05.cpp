#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char* down10000[] = { "십", "백", "천" }; // 만의 자리 미만
	const char* one[] = { "일", "이", "삼", "사", "오", "육", "칠", "팔", "구" };
	char *str[] = {0};
	int size, count = 0,insert, len = 0, lab = 0;

	printf("10000보다 작은 정수 하나를 입력하세요 >>> ");
	scanf("%d", &insert);

	if (insert == 0) {
		printf("영");
		return 1;
	}

	while (insert >= 1) {
		size = insert % 10;
		insert /= 10;

		if (size > 0)
		{
			if (count > 0)
			{
				strcpy(str[len++], down10000[lab - 1]);
			}
			strcpy(str[len++], one[size - 1]);
		}
		lab++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%s", str[i]);
	}
	return 0;
}