/*1064 : [기초-삼항연산] 정수 3개 입력받아 가장 작은 수 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int a, b, c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d", (a<b?a:b)<c ? (a<b?a:b) : c );
	/* printf("%d", a<b ? (a<c?a:c) : (b<c?b:c)); */
	
	return 0;
}

/* 삼항 연산자는 이 문제처럼 쓰지 말자, 가독성 안좋다 */
