﻿#include <iostream>
using namespace std;

int square(int n)
{
	return(n * n);		// 함수 작성
}

int main()
{
	int n;
	cout << "제곱할 정수를 입력하시오: ";
	cin >> n;

	cout << square(n) << endl;		// 함수 호출
	return 0;
}