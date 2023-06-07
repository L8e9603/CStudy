/*1055 : [기초-논리연산] 하나라도 참이면 참 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a, &b);
	printf("%d", a || b );

	return 0;
}
