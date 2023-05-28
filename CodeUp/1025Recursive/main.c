#include <stdio.h>
#include <math.h>

int num[];

int print_number_recursive(int n)
{
	int result;

	if (n == 0)
	{
		return 0;
	}

	result = num[n-1] * pow(10,n-1);
	
	printf("[%d]\n", result);

	return print_number_recursive(n-1);
}

int main(void)
{
	int i;

	for(i = 0; i < 5; i++)
	{
		scanf("%1d", &num[i]);
	}
	
	print_number_recursive(5);

	return 0;
}
