/* 1087 : [기초-종합] 여기까지! 이제 그만~(설명) */
#include <stdio.h>

int main(void)
{
	int n = 0, sum = 0, i = 0;
	
	
	scanf("%d", &n);
	
	while (1)
	{
		if (sum >= n)
		{
			break;
		}
		else
		{
			sum += i;
			i++; 
		}
	}
	
	printf("%d", sum);

	return 0;
}
