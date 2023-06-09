/* 1066 : [기초-조건/선택실행구조] 정수 3개 입력받아 짝/홀 출력하기(설명) */
#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a%2 == 0) 
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}

	if(b%2 == 0) 
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}
	
	if(c%2 == 0) 
	{
		printf("even\n");
	}
	else
	{
		printf("odd\n");
	}

	return 0;
}
