#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    char arr[100];
    char temp;
    int leng = 0;

    printf("문자열을 입력하세요 : ");
    scanf("%s", arr);

    //문자열의 길이를 알아냄
    while (arr[leng] != '\0')
        leng++;

    //반복문은 문자열의 역순을 만들어내는 역할
    //leng/2를 하는 이유는 역순을 만들기위해 반복을 절반만 해야하기 때문
    for (int i = 0; i < leng / 2; i++) {
        temp = arr[i];
        //-1을 하는 이유는 문자열의 끝에 \0(NULL)가 있기때문
        //그 \0를 무시하고 나머지 문자열들만 자리를 바꾸기 위함임
        arr[i] = arr[leng - i - 1];
        arr[leng - i - 1] = temp;
    }
    printf("입력한 단어를 반대로 출력합니다: %s\n", arr);

    return 0;
}

