/*1056 : [기초-논리연산] 참/거짓이 서로 다를 때에만 참 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a, &b);
	printf("%d", (a && !b) || (!a && b));
	printf("%d", a ^ b);

	return 0;
}
