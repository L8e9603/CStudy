/* 1080 : [기초-종합] 언제까지 더해야 할까? */
#include <stdio.h>

int main(void)
{	
	int n = 0;
	int sum = 0;
	int i = 0;

	scanf("%d", &n);

	while (sum < n)
	{
		i++;
		sum += i;
	}

	printf("%d", i);
		
	return 0;
}
