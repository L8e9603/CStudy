/* 1090 : [기초-종합] 수 나열하기2 */
#include <stdio.h>

int main(void)
{
	int start_num = 0;
	int ratio = 0;
	int n = 0;
	int i;
	long long int result;
	
	scanf("%d %d %d", &start_num, &ratio, &n);

	result = start_num;

	for (i = 1; i < n; i++)
	{
		result *= ratio;
	}

	printf("%lld", result);

	return 0;
}
