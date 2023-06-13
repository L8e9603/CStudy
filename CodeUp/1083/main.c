/* 1083 : [기초-종합] 3 6 9 게임의 왕이 되자!(설명) */
#include <stdio.h>

int main(void)
{
	int num = 0;
	int i;
	
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++)
	{
		if(i % 3 == 0)
		{
			printf("X ");
		}
		else
		{
			printf("%d ", i);
		}
	}	

	return 0;
}
