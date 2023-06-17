/* 1095 : [기초-1차원배열] 이상한 출석 번호 부르기3(설명) */
#include <stdio.h>

int main(void)
{
	int i;
	int arr[10000] = {0, };
	int count = 0;
	int min = 23;
	
	scanf("%d", &count);
	
	for (i = 0; i < count; i++)
	{
		scanf("%d", &arr[i]);
		
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	
	printf("%d", min);

	return 0;
}
