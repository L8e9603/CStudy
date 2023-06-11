#include <stdio.h>

int reset_num(int* a, int* b, int* c); /* 전방선언 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	/* short circuit */
	if (++i || ++j || ++k)
	{
		printf("true\n");
	}
	
	printf("%d %d %d\n", i, j, k); /* 1 0 0, i++ || 이후 평가되지 않음 */


	/* short circuit 2 */
	reset_num(&i, &j, &k);

	if (--i && --j || ++k)
	{
		printf("true\n");
	}
		
	printf("%d %d %d\n", i, j, k); /* -1 -1 0, ++k만 평가되지 않음 */


	/* short circuit 3 */
	reset_num(&i, &j, &k);

	if (i && ++j || ++k)
	{
		printf("true\n");
	}
		
	printf("%d %d %d\n", i, j, k); /* 0 0 1, ++j만 평가되지 않음 */


	/* short circuit 4 */
	reset_num(&i, &j, &k);

	if (i && ++j && ++k)
	{
		printf("true\n");
	}
		
	printf("%d %d %d\n", i, j, k); /* 0 0 0, ++j, ++k 평가되지 않음 */


	/* no short circuit */
	reset_num(&i, &j, &k);

	if (i && j || ++k)
	{
		printf("true\n");
	}
		
	printf("%d %d %d\n", i, j, k); /* 0 0 1 */

	return 0;
}

int reset_num(int* a, int* b, int* c)
{
	*a = 0;
	*b = 0;
	*c = 0;
	
	printf("\n");	

	return 0;
}
