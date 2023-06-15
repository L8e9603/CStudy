/* 1088 : [기초-종합] 3의 배수는 통과?(설명) */
#include <stdio.h>

int main(void)
{
	int n = 0;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		else
		{	
			printf("%d ", i);
		}
	}

	return 0;
}
