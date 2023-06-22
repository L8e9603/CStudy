/* 1099 : [기초-2차원배열] 성실한 개미 */
#include <stdio.h>

#define LABYRINTH_SIZE_HEIGHT (10)
#define LABYRINTH_SIZE_WIDTH (10)

int labyrinth[LABYRINTH_SIZE_HEIGHT][LABYRINTH_SIZE_WIDTH];

int main(void)
{
	int is_wall = 0;
	int i, j;
	int col;

	/* 미로 초기화 */
	for (i = 0; i < LABYRINTH_SIZE_HEIGHT; i++)
	{
		for (j = 0; j < LABYRINTH_SIZE_WIDTH; j++)
		{
			scanf("%d", &is_wall);
			labyrinth[i][j] = is_wall;
		}
	}

	/* 개미 미로 찾기 시작 */
	i = 1;
	j = 0;

	while (1)
	{
		if (i == 9 || j == 9)
		{
			break;
		}
		else if (labyrinth[i][j + 1] == 0)
		{
			if (j != 0)
			{
				labyrinth[i][j] = 9;
			}
			j++;
			continue;
		}
		else if (labyrinth[i][j + 1] == 1)
		{
			labyrinth[i][j] = 9;		

			if (labyrinth[i + 1][j] == 2)
			{
				labyrinth[i + 1][j] = 9;
				break;
			}
			else
			{
				i++;
				continue;
			}

		}
		else if (labyrinth[i][j + 1] == 2)
		{
			if (j != 0)
			{
				labyrinth[i][j] = 9;
			}
			labyrinth[i][j + 1] = 9;
			break;
		}
	}
	
	/* 미로 출력 */
	for (i = 0; i < LABYRINTH_SIZE_HEIGHT; i++)
	{
		for (j = 0; j < LABYRINTH_SIZE_WIDTH; j++)
		{	
			printf("%d ", labyrinth[i][j]);
		}
		printf("\n");
	}

	return 0;
}
