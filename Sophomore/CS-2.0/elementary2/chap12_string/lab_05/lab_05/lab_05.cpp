#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char* down10000[] = { "��", "��", "õ" }; // ���� �ڸ� �̸�
	const char* one[] = { "��", "��", "��", "��", "��", "��", "ĥ", "��", "��" };
	char *str[] = {0};
	int size, count = 0,insert, len = 0, lab = 0;

	printf("10000���� ���� ���� �ϳ��� �Է��ϼ��� >>> ");
	scanf("%d", &insert);

	if (insert == 0) {
		printf("��");
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