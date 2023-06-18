/* 1097 : [기초-2차원배열] 바둑알 십자 뒤집기(설명) */
#include <stdio.h>
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAY_LENGTH_MULTIDIMENSIONAL(arr) (sizeof(arr) / sizeof(arr[0][0]))
#define ARRAY_LENGTH_ROW(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAY_LENGTH_COL(arr) (sizeof(arr[0]) / sizeof(arr[0][0]))

int main(void)
{
	int stone_coordinate[19][19] = {0, };
	int stone_color = 0; /* 0 == black, 1 == white */
	int flip_count = 0;
	int x_coordinate = 0;
	int y_coordinate = 0;
	int i, j;

	/* 바둑이 깔려 있는 상황 입력받기 */
	for (i = 0; i < ARRAY_LENGTH_ROW(stone_coordinate); i++)
	{
		for (j = 0; j < ARRAY_LENGTH_COL(stone_coordinate); j++)
		{
			scanf("%d ", &stone_color);
			stone_coordinate[i][j] = stone_color;
		}
	}
	
	/* 뒤집기 횟수 입력받기 */
	scanf("%d\n", &flip_count);
	
	/* 뒤집기 횟수만큼 좌표 입력 반복 */
	for (i = 0; i < flip_count; i++)
	{
		scanf("%d %d", &x_coordinate, &y_coordinate);

		stone_flipper(stone_coordinate, x_coordinate, y_coordinate, flip_count);
	}

	/* 뒤집기 완료된 바둑판 출력 */
	for (i = 0; i < ARRAY_LENGTH_ROW(stone_coordinate); i++)
	{
		for (j = 0; j < ARRAY_LENGTH_COL(stone_coordinate); j++)
		{
			printf("%d ", stone_coordinate[i][j]);
		}
		
		printf("\n");
	}
}

int stone_flipper(int* arr, int flip_x, int flip_y, int flip_count)
{
	int i;
	int j;

	flip_x--;
	flip_y--;

	/* 가로 뒤집기 */
	for (j = 0; j < 19; j++)
	{
		if (*(arr + (flip_x * 19 + j)) == 0)
		{
			*(arr + (flip_x * 19 + j)) = 1;
		}
		else
		{
			*(arr + (flip_x * 19 + j)) = 0;
		}
	}
	
	/* 세로 뒤집기 */
	for (j = 0; j < 19; j++)
	{	
		if (*(arr + (j * 19 + flip_y)) == 0)
		{
			*(arr + (j * 19 + flip_y)) = 1;
		}
		else
		{
			*(arr + (j * 19 + flip_y)) = 0;
		}
	}

	return 0;
}
