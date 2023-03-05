#include <stdio.h>
#include <stdlib.h>

typedef struct node{ // ��� Ÿ�� 
	int data;
	struct node* next;
	struct node* pre;
}Listnode;

Listnode* start = NULL; // �ʱ�ȭ 
Listnode* cur - start;

void insert(int d);
void deletelist(int d);
void print();
void delNode();

int main(void)
{
	int select=0;
	int a;
	
	do{	
	printf("1. ��� �߰�\n");
	printf("2. ��� ����\n");
	printf("3. ��� ���\n");
	printf("4. ����\n");
	printf("==================\n");
	printf("�޴��� �����ϼ���.\n")
	scanf("%d", &select);
		switch(select)
		{
			case 1:
				if(cur!=NULL);
				printf("���ڸ� �Է����ּ��� : ");
				fflush(stdin);
				scanf("%d", &a);
				insert(a);
				break;
			case 2:
				if(cur!=NULL);
				printf("����� ���ڸ� �Է����ּ��� : ");
				scanf("%d", &a);
				deletelist(a);
				break;	
			case 3:
				pirnt();
				break;
			case 4:
				printf("���α׷��� �����մϴ�.\n") 
			default:
				printf("�߸��� �Է��Դϴ�.\n");
				break;		
				}
		fflush(stdin);
		system("pause");
		system("cls");
		}while(true);
		return 0;
 }
 
 void insert(int data)
 {
 	Listnode *newnode;
 	newnode = (Listnode*)malloc(sizeof(Listnode));
 	newnode-> data = d;
 	newnode -> next = NULL;
 	newnode -> pre = NULL;
 	
 	if(start==NULL)
 	{
 		start = cur = newnode;
 		return;
	 }
	 
	 if(cur->data < d)
	 {
	 	while(cur->pre != NULL)
	 	{
	 		if(cur->pre->data > d)
	 		{
			newnode->next = cur;
	 		newnode->pre = cur->pre;
	 		cur->pre->next = newnode;
	 		cur->pre = newnode;
	 		return;
		 }
		 cur = cur->pre;
	 }
	 newnode->next= cur;
	 cur->pre = newnode;
	 start = newnode;
 }
 else if(cur->data > = d)
 {
 	while(cur->next != NULL)
 	{
 		if(cur->next->data < d)
 		{
 			newnode->next = cur->next;
 			newnode->pre = cur;
 			cur->next->pre = newnode;
 			cur->next = newnode;
 			return;
		 }
		 cur = cur->next;
	 }
	 newnode->pre = cur;
	 cur -> next = newnode;
 }
}

void print()
{
	Listnode* current;
	if(start==NULL)
	{
		printf("�����Ͱ� �����ϴ�.\n");
		return;
	}
	current=start;
	printf("��带 ����մϴ�.\n");
	
	while(current->next != NULL)
	{
		printf("[%d] -> ", current->data);
		current = current->next;
	}
	printf("[%d]\n", current->data;)
}

void deletelist(int d)
{
	if(start==NULL)
	{
		printf("�����Ͱ� �����ϴ�.\n");
		return;
	}

	if(cur->data > d)
	{
		while(cur != NULL && cur->data != d)
			cur = cur->next;
	}
	else if(cur->data < d)
	{
		while(cur != NULL && cur->data != d)
			cur = cur->pre;
	}

	if(cur->data == d) // cur�� ��ó���̳� �Ǹ������� ����������
	{
		delNode();
	}
	else
		printf("���Ḯ��Ʈ�� �Է��Ͻ� ���ڰ� �����ϴ�.\n");
}
void delNode()
{
	DNODE* del;
	del = cur;
	if(cur->next != NULL)
		cur->next->pre = cur->pre;
	if(cur->pre != NULL)
		cur->pre->next = cur->next;

	if(start==cur)
		start = cur->next;

	if(cur->pre!=NULL)
		cur=cur->pre;
	else
		cur=cur->next;
	
	free(del);
}
