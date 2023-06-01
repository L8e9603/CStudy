#include <stdio.h>

int main(void)
{
	int counter = 5;
	while (counter >= 0)
	{
		if (counter)
		{
			printf("Hello World!\n");
		}
		else
		{
			printf("Good Bye!\n");
		}
		--counter;
	}
	
	return 0;
}
