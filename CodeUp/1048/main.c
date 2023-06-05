/*1048 : [기초-비트시프트연산] 한 번에 2의 거듭제곱 배로 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int integer_part, exponent = 0;
	int limit = 0;
	int result = 0;

	scanf("%d %d", &integer_part, &exponent);
	limit = integer_part * exponent;	

	/* 0 > limit이 참이면 limit < 100은 평가 안됨 */
	if (0 > limit || limit > 100)
	{
		printf("Error");
		return 101;
	}
	else
	{
		result = integer_part << exponent;
		printf("%d", result);
	}

	return 0;
}

/*모범 소스*/
/*
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a<<b );
    return 0;
}
*/