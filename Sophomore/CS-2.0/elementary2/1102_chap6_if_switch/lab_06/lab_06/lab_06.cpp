#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int pay = 0;
	printf("�ҵ� �Է� >> ");
	scanf("%d", &pay);
	if (pay > 500000000)
		printf("���� ���ռҵ�: %d, ����: 42%", pay);
	else if (pay > 300000000 && pay <= 500000000)
		printf("���� ���ռҵ�: %d, ����: 40%", pay);
	else if (pay <= 300000000 && pay > 150000000)
		printf("���� ���ռҵ�: %d, ����: 38%", pay);
	else if (pay <= 150000000 && pay > 88000000)
		printf("���� ���ռҵ�: %d, ����: 35%", pay);
	else if (pay > 46000000 && pay <= 88000000)
		printf("���� ���ռҵ�: %d, ����: 24%", pay);
	else if (pay > 12000000 && pay <= 46000000)
		printf("���� ���ռҵ�: %d, ����: 15%", pay);
	else if (pay <= 12000000)
		printf("���� ���ռҵ�: %d, ����: 6%", pay);
	else
		printf("error");

	return 0;
		
}