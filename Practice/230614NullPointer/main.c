#include <stdio.h>

int main(void)
{
	int* ptr = NULL;
	
	*ptr = 100;
	
	printf("%d", *ptr);
	
	return 0;	
}
