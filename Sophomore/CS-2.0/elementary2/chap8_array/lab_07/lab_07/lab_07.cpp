#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[20] = { 0, };
	int ary_num = 0; // �󵵼��� ���� ���� �� ����
	int ary_cnt[10] = { 0, }; // �󵵼� ����

	printf("0���� 9������ ������ �Է��Ͻÿ�.\n");

	for (int i = 0; i <= 20; i++) // ary[20]�� ���� �Է� �ޱ� �� ����ϴ� �ݺ���
	{
		scanf("%d", &ary[i]);
		printf("%d ", ary[i]);
	}
	printf("\n");
	
	// ary_cnt(�󵵼��� �����ϴ� �迭 ����)�� �迭 �ε�����
	// ary�� �迭 �ε����� ����
	for (int j = 0; j < 20; j++) {
		ary_cnt[ary[j]] += 1;
	}

	// �󵵼��� ���� ū ���� ���ϴ� �ݺ���
	// 0~9���� ��� ���ؼ� �󵵼� ū ���� ary_num�� ����
	for (int k = 1; k < 10; k++)
	{
		if (ary_cnt[ary_num] < ary_cnt[k]) {
			ary_num = k;
		}
	}

	// ��� ���
	printf("0 ~ 9 �� ���� ���� ���� ���� %d �̰�, %d�� ���Խ��ϴ�.", ary_num, ary_cnt);

	return 0;
}