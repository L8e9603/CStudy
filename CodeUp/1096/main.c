/* 1096 : [기초-2차원배열] 바둑판에 흰 돌 놓기(설명) */
#include <stdio.h>
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAY_LENGTH_MULTIDIMENSIONAL(arr) (sizeof(arr) / sizeof(arr[0][0]))
#define ARRAY_LENGTH_ROW(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAY_LENGTH_COL(arr) (sizeof(arr[0]) / sizeof(arr[0][0]))

int main(void)
{
	int stone_coordinate[19][19] = {0, };
	int white_stone_num = 0;
	int x_coordinate = 0;
	int y_coordinate = 0;
	int i, j;
	
	scanf("%d", &white_stone_num);
	
	for (i = 0; i < white_stone_num; i++)
	{
		scanf("%d %d", &x_coordinate, &y_coordinate);
		stone_coordinate[x_coordinate-1][y_coordinate-1] = 1;
	}

	for (i = 0; i < ARRAY_LENGTH_COL(stone_coordinate); i++)
	{
		for (j = 0; j < ARRAY_LENGTH_ROW(stone_coordinate); j++)
		{
			printf("%d ", stone_coordinate[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}
