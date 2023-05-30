#include<stdio.h>

int main(void)
{
	int nums[5]
	int nums2[] = nums[5] ;

	/*goto out_b;*/

	out_c:
		printf("undo c\n");
	out_b:
		printf("undo b\n");
	out_a:
		printf("undo a\n");

	return 0;
}
