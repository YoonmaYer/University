#include <stdio.h>

int main(void)
{
	int data[] = { 3, 21, 35, 57, 24, 82, 8 }; // 배열, 원소 선언
	
    for (int i = 0; i < data[i]; i++)
    {
        data[i] = data[i] + 10; // 배열 data의 인덱스 i가 증가할때마다 원소에 10을 더해준다.
        if (i == 0)      // 첫번째 data[0]번째를 출력할때는 앞에 콤마(,)를 붙이지 않는다.
        {
            printf("%d", data[i]);
        }

        else if (i == 7) // 마지막 data[7]를 출력할때는 맨뒤에 \n를 해준다.
        {
            printf(", %d \n", data[i]);
        }
        else
            printf(", %d", data[i]);
    }
}
