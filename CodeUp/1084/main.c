/* 1084 : [기초-종합] 빛 섞어 색 만들기(설명) */
#include <stdio.h>

int main(void)
{
	int red, green, blue = 0;
	int i, j, k = 0;
	int count = 0;
	
	scanf("%d %d %d", &red, &green, &blue);
	
	for (i = 0; i < red; i++)
	{
		for (j = 0; j < green; j++)
		{
			for (k = 0; k < blue; k++)
			{	
				count++;
				printf("%d %d %d\n", i, j, k);	
			}
		}
	}
	
	printf("%d\n", count);

	return 0;
}
