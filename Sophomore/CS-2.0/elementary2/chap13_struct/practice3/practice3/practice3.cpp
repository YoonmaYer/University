#include <stdio.h>

// ���Ͽ� ����ü�� �����ϸ鼭 ���� data 1�� ������ ����
union data
{
	char ch;	// ������
	int cnt;	// ������
	double real;// �Ǽ���

}data1; // �������� data1

int main(void)
{
	union data data2 = { 'A' }; // ù ����� char�����θ� �ʱ�ȭ ����
	union data data3 = { 97 };
	union data data4 = data2;
	data4.real = 3.78;

	printf("%zu %zu\n", sizeof(union data), sizeof(data3));
	printf("%c %c %f\n", data2.ch, data3.ch, data4.real);

	// ��� ch�� ����
	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	// ��� cnt�� ����
	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	// ��� real�� ����
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}