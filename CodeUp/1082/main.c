/* 1082 : [기초-종합] 16진수 구구단? */
#include <stdio.h>

int main(void)
{
	int hex_num = 0;
	int i;
	
	scanf("%X", &hex_num);	

	for (i = 1; i < 16; i++)
	{
		printf("%X*%X=%X\n", hex_num, i, hex_num * i);
	}
	
	return 0;
}
