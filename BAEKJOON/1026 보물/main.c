/* 1206 보물 */
#include <stdio.h>

#include "quick_sort.h"

int main(void)
{
	int num_of_elements = 0;
	int a[50] = {0, };
	int b[50] = {0, };
	int s = 0;
	int i;
	
	scanf("%d", &num_of_elements);
	
	for (i = 0; i < num_of_elements; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < num_of_elements; i++)
	{
		scanf("%d", &b[i]);
	}

	quick_sort_for_asc(a, 0, num_of_elements - 1);
	quick_sort_for_desc(b, 0, num_of_elements - 1);
	
	for (i = 0; i < num_of_elements; i++)
	{
		s += a[i] * b[i];
	}

	printf("%d", s);
	
	return 0;
}
