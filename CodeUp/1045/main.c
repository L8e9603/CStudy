/*1045 : [기초-산술연산] 정수 2개 입력받아 자동 계산하기*/
#include <stdio.h>

int main(void)
{
	int  a, b = 0;	

	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float)a / b);
	
	return 0;
}
