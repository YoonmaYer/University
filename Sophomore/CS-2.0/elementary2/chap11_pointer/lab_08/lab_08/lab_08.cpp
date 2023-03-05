#include<stdio.h>

int main(void)
{
	int a[2][3] = { {11, 22, 33},
					{44, 55, 66} }; // 배열 원소값

	int(* pointer)[3] = a; // 행을 3으로 하는 2차원 배열 포인터 생성
	
	int* p = &a[0][0]; // 원소값 11의 주소 접근
	int* q = &a[1][2]; // 원소값 66의 주소 접근

	printf("%d %d %d %d %d %d", *q, *(q-1),*(q-2), *(p+2),*(p+1),*p);

	return 0;
}
