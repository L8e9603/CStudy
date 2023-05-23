#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (++i || ++j && ++k) /* ++j, ++k does not evaluate */
	{
    		printf("true!\n");
	}

	printf("%d %d %d\n", i, j, k);

	return 0;
}
