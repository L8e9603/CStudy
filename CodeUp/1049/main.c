/*1049 : [기초-비교연산] 두 정수 입력받아 비교하기1(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	
	scanf("%d %d", &a, &b);
	printf("%d", a > b); /* 조건식이 참이면 1, 거짓이면 0 반환 (C 에서 0이 아닌 값은 모두 참) */
	

	return 0;
}
