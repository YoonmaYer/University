#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int toint(char* strint);

int main(void)
{
	char line[81];

	printf("������ �ϳ� �Է��ϼ���. -> ");

	fgets(line,81,stdin);
	printf("%s\n\n", line);

	printf("���� �Լ� atoi()�� �̿��Ͽ� �Է��� ���ڿ��� "
		"������ �ٲٸ� -> %d\n", atoi(line));
	printf("���⼭ ���� �Լ��� �̿��Ͽ� �Է��� ���ڿ��� "
		"������ �ٲٸ� -> %d\n", toint(line));

}

int toint(char* strint)
{
	int i = 0, cnt = 0;
	int sum = 0, x = 0;

	while (isdigit(strint[i++])) {
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		sum += (strint[i] - '0') * (int)pow(10, cnt - i - 1);
	}

	return sum;
}