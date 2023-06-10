/*1068 : [기초-조건/선택실행구조] 정수 1개 입력받아 평가 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a = 0;
	
	scanf("%d", &a);
	
	if(a >= 90)
	{
		printf("A");
	}
	else if(a >= 70)
	{
		printf("B");
	}
	else if(a >= 40)
	{
		printf("C");
	}
	else if(a >= 0)
	{
		printf("D");
	}

	return 0;
}
