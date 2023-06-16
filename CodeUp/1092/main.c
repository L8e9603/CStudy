/* 1092 : [기초-종합] 함께 문제 푸는 날(설명) */
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int date = 1;

	scanf("%d %d %d", &a, &b, &c);
	
	while (1)
	{	
		if (date % a == 0 && date % b == 0 && date % c ==0)
		{
			break;
		}
		
		date++;
	}

	printf("%d", date);
	
	return 0;
}
