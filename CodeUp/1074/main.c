/* 1074 : [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기1(설명) */
#include <stdio.h>

int main(void)
{
	int a = 1;
	
	scanf("%d", &a);
	
	while(a != 0)
	{
		printf("%d\n", a);
		a--;
	}

	return 0;
}
