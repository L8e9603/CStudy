/* 1081 : [기초-종합] 주사위를 2개 던지면?(설명) */
#include <stdio.h>

int main(void)
{
	int dice1 = 1;
	int dice2 = 1;
	int i;
	int j;

	scanf("%d %d", &dice1, &dice2);

	for (i = 1; i <= dice1; i++)
	{
		for (j = 1; j <= dice2; j++)
		{
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}
