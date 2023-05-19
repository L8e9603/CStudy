#include <stdio.h>

int main(void)
{
	unsigned int unsigned_int = 2147483648; /*경고발생, 컴파일러가 우항의 2147483648을 부호 있는 정수로 인식해서 경고 발생, 부호있는 정수의 범위는 -2147483648~2147483647*/
	unsigned int unsigned_int2 = 2147483648u; /*리터럴을 이용해 부호없는 정수라고 명시 해주면 경고가 사라진다*/
	unsigned int unsigned_int3 = 4294967296u; /*컴파일 에러, 부호없는 정수의 최댓값인 4294967295를 초과함*/
	printf("%d\n", unsigned_int);
	printf("%u\n", unsigned_int2);
	printf("%u\n", unsigned_int3);
	getch();
	return 0;
}
