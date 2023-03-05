#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
//���� ����Ʈ�� �̿��� ��ȭ��ȣ�� ��� ���α׷�
typedef struct Node {
	char name[MAX];
	char tel[MAX];
	struct Node* link;
} Node;

Node* p = NULL;
Node* prev = NULL;
Node* head = NULL;
Node* next = NULL;

char buffer[MAX];

void menu();
void AllClear();
void Add();
void Search();
void Change();


int main()
{
	menu();

}
void menu()
{
	printf("���� ����Ʈ�� �̿��� ��ȭ ��ȣ�� �޴�\n");
	printf("------------------------------------\n");
	printf("1. �ʱ�ȭ\n");
	printf("2. ��ȭ ��ȣ �߰�\n");
	printf("3. ��ȭ ��ȣ Ž��\n");
	printf("4. ��ȭ ��ȣ ����\n");
	printf("5. ����\n");
	printf("------------------------------------\n");
	printf("��ȣ�� �Է��ϼ��� : ");
	int num;
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		AllClear();
		break;
	case 2:
		Add();
		break;
	case 3:
		Search();
		break;
	case 4:
		Change();
		break;
	case 5:
		exit(0);
		break;

	}
}
void AllClear()  //��ȭ��ȣ �ʱ�ȭ
{
	p = head;
	while (1)
	{
		if (p == NULL)
		{
			printf("�ʱ�ȭ �Ϸ�!!\n\n");
			head = NULL;
			break;
		}
		next = p->link;
		free(p);
		p = next;
	}

	menu();
}
void Add() //��ȭ��ȣ �ϳ� �߰�
{
	getchar();
	p = (Node*)malloc(sizeof(Node));
	p->link = NULL;
	printf("�̸� : ");
	gets_s(buffer, MAX);
	strcpy(p->name, buffer);
	printf("��ȭ��ȣ : ");
	gets_s(buffer, MAX);
	strcpy(p->tel, buffer);
	printf("�߰��Ǿ����ϴ�!\n\n");
	if (head == NULL)
		head = p;
	else
		prev->link = p;
	prev = p;
	menu();

}
void Search() // ��ȭ��ȣ ��ü Ž��
{

	p = head;
	if (head == NULL)
	{
		printf("������ �����ϴ�.\n\n");
	}
	while (1)
	{
		if (p == NULL)
			break;

		printf("�̸� : %s\n", p->name);
		printf("��ȭ��ȣ : %s\n\n", p->tel);
		p = p->link;

	}
	menu();

}
void Change() //��ȭ��ȣ�� ��ȭ��ȣ ����
{
	printf("������ ��ȭ��ȣ���� �̸��� �Է��ϼ��� : ");
	getchar();
	gets_s(buffer, MAX);
	p = head;

	while (1)
	{

		if (p == NULL)
		{
			printf("ã�� �̸��� �����ϴ�.\n\n");
			break;
		}
		if (strcmp(buffer, p->name) != 0)
		{
			p = p->link;
		}
		else
		{
			printf("��ȭ��ȣ�� �����ϼ��� : ");
			gets_s(buffer, MAX);
			strcpy(p->tel, buffer);
			printf("���� �Ϸ�!\n\n");
			break;
		}

	}

	menu();
}
