/* 1091 : [기초-종합] 수 나열하기3 */
#include <stdio.h>

int main(void)
{
	int a = 0;
	int m = 0;
	int d = 0;
	int n = 0;
	int i;
	long long int result;

	scanf("%d %d %d %d", &a, &m, &d, &n);
	
	result = a;
		
	for (i = 0; i < n-1; i++)
	{	
		result = (result * m) + d;
	}
	
	printf("%lld", result);

	return 0;
}
