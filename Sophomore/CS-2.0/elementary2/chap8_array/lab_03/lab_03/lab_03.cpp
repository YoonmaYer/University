#include <stdio.h>

int main(void)
{
	int data[] = { 3, 21, 35, 57, 24, 82, 8 }; // �迭, ���� ����
	
    for (int i = 0; i < data[i]; i++)
    {
        data[i] = data[i] + 10; // �迭 data�� �ε��� i�� �����Ҷ����� ���ҿ� 10�� �����ش�.
        if (i == 0)      // ù��° data[0]��°�� ����Ҷ��� �տ� �޸�(,)�� ������ �ʴ´�.
        {
            printf("%d", data[i]);
        }

        else if (i == 7) // ������ data[7]�� ����Ҷ��� �ǵڿ� \n�� ���ش�.
        {
            printf(", %d \n", data[i]);
        }
        else
            printf(", %d", data[i]);
    }
}
