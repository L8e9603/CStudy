/* 1095 : [기초-1차원배열] 이상한 출석 번호 부르기3(설명) */
#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;
	int num_called = 0;
	int min = 23;
	
	scanf("%d", &count);
	
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num_called);
		
		if (min > num_called)
		{
			min = num_called;
		}
	}
	
	printf("%d", min);

	return 0;
}
