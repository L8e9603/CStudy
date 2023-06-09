/* 1067 : [기초-조건/선택실행구조] 정수 1개 입력받아 분석하기(설명) */
#include <stdio.h>

int main(void)
{
	int a = 0;

	scanf("%d", &a);

	if(a > 0)
	{
		if(a % 2 == 0)
		{
			printf("plus\n");
			printf("even\n");
		}
		else
		{	
			printf("plus\n");
			printf("odd\n");
		}
	}
	else
	{
		if(a % 2 == 0)
		{
			printf("minus\n");
			printf("even\n");
		}
		else
		{	
			printf("minus\n");
			printf("odd\n");
		}
	}
	
	return 0;
}
