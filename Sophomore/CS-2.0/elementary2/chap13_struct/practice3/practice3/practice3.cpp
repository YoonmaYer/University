#include <stdio.h>

// 유니온 구조체를 정의하면서 변수 data 1도 선언한 문장
union data
{
	char ch;	// 문자형
	int cnt;	// 정수형
	double real;// 실수형

}data1; // 전역변수 data1

int main(void)
{
	union data data2 = { 'A' }; // 첫 멤버인 char형으로만 초기화 가능
	union data data3 = { 97 };
	union data data4 = data2;
	data4.real = 3.78;

	printf("%zu %zu\n", sizeof(union data), sizeof(data3));
	printf("%c %c %f\n", data2.ch, data3.ch, data4.real);

	// 멤버 ch에 저장
	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	// 멤버 cnt에 저장
	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	// 멤버 real에 저장
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}