/* 1098 : [기초-2차원배열] 설탕과자 뽑기 */
#include <stdio.h>
#include <stdlib.h>

int grid[100][100] = {0, };
int grid_height = 0, grid_width = 0;
int stick_num = 0;
int stick_length = 0, stick_direction = 0, stick_coordinate_x = 0, stick_coordinate_y = 0; /* stick_direction 0: horizontal, 1: vertical */

int draw_stick(int grid[][100], int stick_length, int stick_direction, int stick_coordinate_x, int stick_coordinate_y);

int main(void)
{
	int i;
	int j;
	
	scanf("%d %d", &grid_height, &grid_width);
	
	scanf("%d", &stick_num);

	for (i = 0; i < stick_num; i++)
	{
		scanf("%d %d %d %d", &stick_length, &stick_direction, &stick_coordinate_x, &stick_coordinate_y);
		draw_stick(grid, stick_length, stick_direction, stick_coordinate_x, stick_coordinate_y);
	}
	
	for (i = 0; i < grid_height; i++)
	{
		for (j = 0; j < grid_width; j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

int draw_stick(int grid[][100], int stick_length, int stick_direction, int stick_coordinate_x, int stick_coordinate_y)
{
	int i;

	/* draw horizontal */
	if (stick_direction == 0)
	{	
		for (i = 0; i < stick_length; i++)
		{
			grid[stick_coordinate_x-1][stick_coordinate_y-1] = 1;
			stick_coordinate_y++;
		}
	}
	/* draw vertical */
	else
	{	
		for (i = 0; i < stick_length; i++)
		{
			grid[stick_coordinate_x-1][stick_coordinate_y-1] = 1;
			stick_coordinate_x++;
		}
	}
	
	return 0;
}
