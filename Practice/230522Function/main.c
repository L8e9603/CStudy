#include <stdio.h>

int main(void)
{
	foo();
	getchar();
	return 0;
}



int foo(void)
{
	printf("foo called");
	return 0;
}
