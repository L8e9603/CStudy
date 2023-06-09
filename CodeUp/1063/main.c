/*1063 : [기초-삼항연산] 두 정수 입력받아 큰 수 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a, &b);
	printf("%d", a>b ? a:b);

	return 0;
}
