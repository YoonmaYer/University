#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    char arr[100];
    char temp;
    int leng = 0;

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", arr);

    //���ڿ��� ���̸� �˾Ƴ�
    while (arr[leng] != '\0')
        leng++;

    //�ݺ����� ���ڿ��� ������ ������ ����
    //leng/2�� �ϴ� ������ ������ ��������� �ݺ��� ���ݸ� �ؾ��ϱ� ����
    for (int i = 0; i < leng / 2; i++) {
        temp = arr[i];
        //-1�� �ϴ� ������ ���ڿ��� ���� \0(NULL)�� �ֱ⶧��
        //�� \0�� �����ϰ� ������ ���ڿ��鸸 �ڸ��� �ٲٱ� ������
        arr[i] = arr[leng - i - 1];
        arr[leng - i - 1] = temp;
    }
    printf("�Է��� �ܾ �ݴ�� ����մϴ�: %s\n", arr);

    return 0;
}

