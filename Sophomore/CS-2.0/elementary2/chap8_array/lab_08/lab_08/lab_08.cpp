#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year,day = 0;
	int month[] = { 0 };
	printf("��� ���� ������ ���� �Է��ϸ� �� ���� ������ �˷��帳�ϴ�.\n");
	printf("2024 2 : �Է� >> ");
	scanf("%d %d", &year,&month); 

    if (month[0] == 1 || month[0] == 3 || month[0] == 5 || month[0] == 7 || month[0] == 8 || month[0] == 10 || month[0] == 12)
        day = 31;
    else if (month[0] == 4 || month[0] == 6 || month[0] == 9 || month[0] == 11)
        day = 30;

    else if (month[0] == 2) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            day = 29;
        else
            day = 28;

    }



    printf("\n%d�� %d���� ������ %d�� �Դϴ�.\n", year, month[0], day);



    return 0;

}
