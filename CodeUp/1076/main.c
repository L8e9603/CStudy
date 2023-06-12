/* 1075 : [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기2(설명) */
#include <stdio.h>

int main(void)
{
	char a = 'a';
	char b = 'a';
	
	scanf("%c", &b);
	
	while(a <= b)
	{
		printf("%c\n", a);
		a += 1;
	}

	return 0;
}
