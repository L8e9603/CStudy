/*1054 : [기초-논리연산] 둘 다 참일 경우만 참 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a, &b);
	printf("%d", a && b );

	return 0;
}
