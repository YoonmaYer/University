#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 2

int user;

// ���������� ����θ� ����

int sys() { // ���� ���� �Լ�

	int random;

	srand((long)time(NULL));

	random = rand() % MAX;

	
}

void usercasescissor() {
	if (user == 0 && sys() == 1)	// case user 0(����)
		printf("�ý����� �¸��Դϴ�.");
	else if (user == 0 && sys() == 2)
		printf("����� �¸��Դϴ�.");
	else if (user == 0 && sys() == 0)
		printf("�����ϴ�.");
}

void usercaserock() {
	if (user == 1 && sys() == 0)	// case user 1(����)
		printf("����� �¸��Դϴ�.");
	else if (user == 1 && sys() == 1)
		printf("�����ϴ�.");
	else if (user == 1 && sys() == 2)
		printf("�ý����� �¸��Դϴ�.");
}

void usercasepaper() {
	if (user == 2 && sys() == 0)	// case user 2(��)
		printf("�ý����� �¸��Դϴ�.");
	else if (user == 2 && sys() == 1)
		printf("����� �¸��Դϴ�.");
	else if (user == 2 && sys() == 2)
		printf("�����ϴ�.");
}


int main() {

	printf("����(0), ����(1), ��(2) �߿��� �ϳ� �Է� -> ");
	scanf("%d", &user);

	printf("����� %s�̰�,",user == 0 ? "����" : user == 1 ? "����" : "��"); // user�� case�� ���� �´� ���� ��ȯ
	printf("�ý����� %s�Դϴ�.\n", sys() == 0 ? "����" : sys() == 1 ? "����" : "��"); // sys()�� case�� ���� �´� ���� ��ȯ
	
	if (user == 0)
		usercasescissor();
	else if (user == 1)
		usercaserock();
	else
		usercasepaper();

	return 0;

	}