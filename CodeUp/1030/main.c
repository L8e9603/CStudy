/*c89에서 컴파일 안됨, c99로 컴파일 했음*/
#include <stdio.h>

int main(void)
{
	long long int n;
	
	scanf("%lld", &n);
	printf("%lld", n);
	
	return 0;
}
