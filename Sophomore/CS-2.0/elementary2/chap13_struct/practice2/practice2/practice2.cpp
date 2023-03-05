#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	// 학생을 위한 구조체
	struct student
	{
		int snum; // 학번
		const char* dept; // 학과 이름
		char name[12]; // 학생 이름
	};
	struct student hong = { 202200001, "컴퓨터정보공학과", "홍길동" };
	struct student na = { 202200002 };
	struct student you = { 202200003 };

	// 학생 이름 입력
	scanf("%s", na.name);
	na.dept = "컴퓨터정보공학과";
	you.dept = "기계공학과";
	memcpy(you.name, "홍길동", 7);
	strcpy(you.name, "홍길동");
	
	printf("[%d, %s, %s]\n", hong.snum, hong.dept,  hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", you.snum, you.dept, you.name);

	struct student one;
	one = you;
	if (one.snum == you.snum)
		printf("학번이 %d로 동일합니다.\n", one.snum);
	if (one.snum == you.snum && !strcmp(one.name, you.name) &&
		!strcmp(one.dept, you.dept))
		printf("내용이 같은 구조체입니다.\n");

	return 0;
}