#include <stdio.h>

void main()
{
	int num=10;
	int*ptr; // ������ ����  
	
	ptr=&num; // �����Ϳ� num �� ���� ptr = num 
	printf("������ ptr�� ����Ű�� ��:%d\n",*ptr);
	printf("num�� ����� ��:%d\n\n",num); // 10 
	
	*ptr=20;
	printf("������ ptr�� ����Ű�� ��:%d\n",*ptr);
	 printf("num�� ����� ��:%d\n\n",num); // 20
	 
	(*ptr)++;
	printf("������ ptr�� ����Ű�� ��:%d\n",*ptr);
	printf("num�� ����� ��:%d\n\n",num); // 21
	
}

// ������ ������ ��� ������ �ּҸ� ������� ���� 
