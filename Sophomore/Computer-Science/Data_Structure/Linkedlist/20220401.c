#include <stdio.h>
#include <stdlib.h>

//��� ����
typedef struct node {
	int id;
	struct node* next; // ���� ��Ʈ�� ����Ű�� ������ 
	// struct node* pre; // ���� ��带 ����Ű�� ������ 
}; NODE;

NODE* start = NULL; // ���۳�带 ����Ű�� ������
int value = 1;

void insert(void);
void delete(void);
void print(void);
void insert_start(NODE* new_node);
void insert_mid(NODE* mid, NODE* new_node);
void insert_end(NODE* end, NODE* new node);
void free_all(void);
void delete_start(void);
void delete_mid(NODE* pre_del);
void delete_end(NODE* pre_del);

int main(void)
{
	int sel;
	
	while (1)
	{
		system("cls");
		printf("<�޴�>\n");
		printf("1. insert\n");
		printf("2. delete\n")'
		printf("3. print\n");
		printf("4. clear\n");
		printf("0. end\n");
		pritnf("=================\n");
		scanf("%d, &sel") // ����� ���� 
		
		switch (sel)
		{
			case 0:
				free_all();
				return 0;
				case 1:
					insert();
					break;
					case 2:
						delete();
						break;
						case 3:
							print();
							break;
							case4:
								free_all();
								break;
								default:
									prinf("�߸��� �Է��Դϴ�.\n");
		}
	}
	return 0;
 } 
 
 void print(void)
 {
 	NODE* cur = NULL;
 	
	for (cur = start; cur != NULL; cur = cur->next)
	{
		printf("%d -> ", cur -> id);
	}
	printf("\n");
	getch(); // ����� �Է� ���(�ƹ�Ű�� ��������) 
 }
 
 void insert(void)
{
	NODE* cur = NULL; // ���� ��带 ����Ű�� ������ (Ŀ��) 
	NODE* new_node = NULL; // ���� ������ �븦 ����Ű�� ������
	int sel, id;
	
	if(start == NULL) // ���� ó�� �����ϴ� ���
	{
		new_node = (NODE*)malloc(sizeof(NODE)); // ��� ����
		new_node->next = NULL; // ������ �ʱ�ȭ
		new_node->id = value++
		start = new_node; // ������������ ���� 
	 } 
	 else
	 {
	 	printf("1. �������� insert\n");
		printf("2. ���������� insert\n");
		printf("3. �߰����� insert\n");
		printf("================\n");
		scanf("%d", &sel);
		
		new_node = (NODE*)malloc(sizeof(NODE)); // ��� ����
		new_node -> next = NULL; // ������ �ʱ�ȭ
		new_node-> id = value++;
		
		if (sel == 1) // ���������� insert
		{
			insert_start(new_node);
		 } 
		 else if (sel == 2) // ������ ������ insert
		 {
		 	// cur�� ������ ��带 ����Ű�� ��.
			 for (cur = start; cur->next != NULL; cur->next);
			 insert_end(cur, new_node); 
		  } 
		  else if (sel == 3) // �߰������� insert
		  {
		  	print();
		  	printf("� ��� �ڿ� insert���� ��� id�� �Է��ϼ���: ");
		  	scanf("%d", &id);
			  // �߸� �Էµ� id�� ���� ����ó���� �ʿ���.
			  
			  for (cur = start; cur != NULL; cur = cur->next)
			  {
			  	if (cur->id == id)
			  	break;
			   } 
			   insert_mid(cur, new_node);
		   } 
		   else // �߸��� �Է�
		   {
		   	free(new_node);
			   return 0; 
			} 
	 }
 } 
 
 // ���������� ���� �Լ�
 void insert_start(NODE* new_node)
 {
 	new_node->next = start;
 	start = new_node; // ���۳�� ���� 
  } 
  
// �߰����� ���� �Լ�
void insert_mid(NODE* mid, NODE* new_node)
{
	new_node->next = mid->next;
	mid->next = new_node;
 } 
 
 void delete(void)
 {
 	int sel, id;
 	NODE* cur;
 	
 	if (start = NULL) // ��尡 �ϳ��� ����
	 return;
	 else if (start->next == NULL) // ��尡 �� �� ����.
	 {
	 	free(start);
		 start = NULL;
		 return; 
	  } 
	  else if (start->next->next == NULL) // ��尡 �� �� ����. 
	  {
	  	printf("1. �������� delete\n");
		  printf("2. ���������� delete\n");
		  printf("==============\n");
		  scanf("%d", &sel);
		  // 3�� �Է��� ������ ���� ���� ����ó���� �ʿ��� 
	   } 
	   else // ��尡 3�� �̻� ����
	   {
	   	printf("1. �������� delete\n");
		  printf("2. ���������� delete\n");
		  printf("3. �߰����� delete\n");
		  printf("==============\n");
		  scanf("%d", &sel);
		} 
		if (sel == 1) // �������� ��带 delete
		{
			delete_start();
		 } 
		 else if (sel == 2) // ���������� ��带 delete 
		 {
		 	// cur�� ������ ����� �� ��带 ����Ű�� ��.
			 for (cur =start; cur->next->next != NULL; cur = cur->next);
			 delete_end(cur);
		 }
		 else if (sel == 3) // �߰������� insert
		 {
		 	print();
		 	printf("delete�� ��� id�� �Է��ϼ���: ");
		 	scanf("%d", &id);
		 	// �߸� �Է��� id�� ���� ����ó���� �ʿ���.
			 
			for (cur = start; cur != NULL; cur = cur->next)
			{
				// ������ ��� �� ��带 ����Ŵ.
				if (cur->next->id == id)
				break; 
			 } 
			 delete_mid(cur);
			 
		  } 
		  else // �߸��� �Է� 
		  {
		  	return 0; 
		   } 
 }
 
 // ���Ḯ��Ʈ ��ü ��� ���� �Լ�
 void free_all(void)
 {
 	NODE* cur;
 	NODE* del = start;
 	
 	if (start == NULL) // ��尡 �ϳ��� ����
	 return;
	 else if (start->next == NULL) // ��尡 �� �� �ۿ� ����.
	 {
	 	free(start); 
	  } 
	  else
	  {
	  	for (cur = start->next; cur != NULL; cur = cur ->next)
	  	{
	  		free(del);
	  		del = cur;
		  }
		  free(del);
	  }
	  start = NULL:
  } 

// �������� ��� ���� �Լ�
void delete_start(void)
{
	NODE* tmp;
	
	tmp = start->next; // �� ��° ����� �ּҰ��� ���
	free(start); // ù ��° ��� ����
	start = tmp; // ���� �� ��° ��带 ���۳��� ���� 
 } 
 
 // ���������� ��� ���� �Լ�
 void delete_end(NODE* pre_del)
 {
 	free(pre_del->next);
 	pre_del->next = NULL;
  } 

// �߰����� ��� ���� �Լ�
void delete_mid(NODE* pre_del)
{
	NODE* del;
	
	del = pre_del->next // ������ ���
	// ������ ��� ���� ��带 ������ ��� ���� ���� �̾���
	pre_del->next = del->next;
	
	free(del); 
 } 
