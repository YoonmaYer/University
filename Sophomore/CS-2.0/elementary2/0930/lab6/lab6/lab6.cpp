#include <stdio.h>

int main()
{
	char input;

	printf("���� �Է�");
	// getchar �Լ��� ���� �Է� �ޱ�
	input = getchar();

	// putchar�� input�� �״��, printf�� %c��
	putchar(input);
	printf("\n%c\n", input);

	// %d, %o, %x�� �̿��Ͽ� �� ������ ���
	printf("10����: %d, 8����: %o, 16����: %x\n", input, input, input);

	return 0;
}