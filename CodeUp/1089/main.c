/* 1089 : [기초-종합] 수 나열하기1 */
#include <stdio.h>

int main(void)
{
	int start_num = 0;
	int interval = 0;
	int n = 0;
	
	scanf("%d %d %d", &start_num, &interval, &n);

	printf("%d", start_num + (interval * (n-1)) );

	return 0;
}
