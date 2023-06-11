#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 8;
	
	printf("a: %d\n", a);
	printf("!a: %d\n", !a); /* 1 출력됨 */
	
	printf("b: %d\n", b);
	printf("!b: %d\n", !b); /* 0 출력됨 */

	printf("c: %d\n", c);
	printf("!c: %d\n", !c); /* 0 출력됨, 0이 아닌 값에 not 연산자를 적용하면 모두 0이 됨 */
	printf("~c: %d\n", ~c); /* 비트 not 연산자, -9 출력됨 */

	return 0;
}
