#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ��� ���� 

int main()
{
	int num1 = 20; // int�� ���� ���� 
	int *numPtr1; // int�� ������ ���� 
	
	numPtr1 = &num1; // num1�� �޸� �ּҸ� ���Ͽ� numPtr�� �Ҵ� 
	
	int *numPtr2; // int�� ������ ���� 
	
	numPtr2 = malloc(sizeof(int)); // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ� 
	
	printf("%p\n", numPtr1); // 000000000062FE0C: ���� num1�� �޸� �ּ� ���
	// ��ǻ�͸���, ������ ������ �޶��� 
	
	printf("%p\n", numPtr2); // 0000000000181420: ���� �Ҵ��  �޸��� �ּ� �߷�
	// ��ǻ�͸���, ������ ������ �޶���  
	
	free(numPtr2); // �������� �Ҵ��� �޸� ���� 
	
	return 0;
 } 
