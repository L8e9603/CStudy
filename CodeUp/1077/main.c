/*1077 : [기초-반복실행구조] 정수 1개 입력받아 그 수까지 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a = 0;
	int i = 0;

	scanf("%d", &a);
	
	for(i; i <= a; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}
