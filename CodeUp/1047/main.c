/*1047 : [기초-비트시프트연산] 정수 1개 입력받아 2배 곱해 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a = 0;
	int result = 0;

	scanf("%d", &a);

	result = a << 1;
	printf("%d", result);
	
	return 0;
}
