/*1072 : [기초-반복실행구조] 정수 입력받아 계속 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int count, num = 0;
	
	scanf("%d", &count);
	
	repeat:	
	scanf("%d", &num);
	printf("%d\n", num);
	count--;	

	if (count != 0)
	{
		goto repeat; /* 위로 점프하는 goto문은 스파게티 코드를 유도한다, goto문은 아래로만 점프하자 */
	}

	return 0;
}
