/*1071 : [기초-반복실행구조] 0 입력될 때까지 무한 출력하기1(설명)*/
#include <stdio.h>

int main(void)
{
	int a = 0;
	
	while(1)
	{
		scanf("%d", &a);

		if (a == 0)
		{
			goto escape; /* goto는 아래로만 내려가야 스파게티 코드 방지가 가능하다 */
		}
		else
		{
			printf("%d\n", a);
		}
	}
	
	escape:

	return 0;
}
