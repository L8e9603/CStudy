#include <stdio.h>

int main(void)
{
	int meeting_num;
	int meeting_start_time[100000] = {0, };
	int meeting_end_time[100000] = {0, };
	int* const meeting_start_time_ptr = meeting_start_time;
	int* const meeting_end_time_ptr = meeting_end_time;
	size_t i, j;
	size_t temp_max_meetings = 1;
	size_t max_meetings = 1;
	size_t start_time;
	size_t end_time;
	
	scanf("%d", &meeting_num);
	
	for (i = 0; i < meeting_num; i++)
	{
		scanf("%d %d", meeting_start_time_ptr + i, meeting_end_time_ptr + i);
	}	

	for (i = 0; i < meeting_num; i++)
	{
		temp_max_meetings = 1;
		end_time = *(meeting_end_time_ptr + i);

		for (j = 0; j < meeting_num; j++)
		{
			start_time = *(meeting_start_time_ptr + j);

			if (i == j)
			{
				continue;
			}

			if (end_time <= start_time)
			{
				temp_max_meetings++;
				/* printf("%d %d %d\n", end_time, start_time, temp_max_meetings); */
				end_time = *(meeting_end_time_ptr + j);
			}
		}
	
		if (max_meetings < temp_max_meetings)
		{
			max_meetings = temp_max_meetings;
		}
	}
	
	printf("%d", max_meetings);

	return 0;	
}
