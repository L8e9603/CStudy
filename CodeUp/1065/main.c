/*1065 : [기초-조건/선택실행구조] 정수 3개 입력받아 짝수만 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a%2 == 0) /* if 의 조건식은 0 또는 1을 반환하는 불 표현식 */
	{
		printf("%d\n", a);
	}

	if(b%2 == 0)
	{
		printf("%d\n", b);
	}
	
	if(c%2 == 0)
	{
		printf("%d\n", c);
	}	

	return 0;
}
