#include <stdio.h>
#include <math.h>

int num[5];

int print_number_recursive(int n);

int main(void)
{
	int i;

	for(i = 4; i > -1; i--)
	{
		scanf("%1d", &num[i]);
	}
	
	print_number_recursive(5);

	return 0;
}

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
