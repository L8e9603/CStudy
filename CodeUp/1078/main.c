/* 1078 : [기초-종합] 짝수 합 구하기(설명) */
#include <stdio.h>

int main(void)
{
	int i;
	int a = 0;
	int sum = 0;

	scanf("%d", &a);
	
	for(i = 1; i <= a; i++)
	{
		if(i % 2 == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);
	
	return 0;
}
