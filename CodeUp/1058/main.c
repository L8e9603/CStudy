/*1058 : [기초-논리연산] 둘 다 거짓일 경우만 참 출력하기*/
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a, &b);	
	printf("%d", !(a || b));	

	return 0;
}
