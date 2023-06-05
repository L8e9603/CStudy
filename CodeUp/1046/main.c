/*1046 : [기초-산술연산] 정수 3개 입력받아 합과 평균 출력하기*/
#include <stdio.h>

int main(void)
{
	int  a, b, c = 0;
	int sum = 0;
	float average = 0.0f;

	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	printf("%d\n", sum);

	average = sum / 3.0f;
	printf("%.1f\n", average);
	
	return 0;
}
