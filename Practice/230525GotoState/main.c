#include<stdio.h>

int main(void)
{
	/*goto out_b;*/

	out_c:
		printf("undo c\n");
	out_b:
		printf("undo b\n");
	out_a:
		printf("undo a\n");

	return 0;
}
