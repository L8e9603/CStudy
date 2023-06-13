/* 1079 : [기초-종합] 원하는 문자가 입력될 때까지 반복 출력하기 */
#include <stdio.h>

int main(void)
{
	char c = 'a';
	
	while (1)
	{
		scanf("%c ", &c);
		printf("%c\n", c);
		
		if(c == 'q')
		{
			break;
		}
		else
		{
			continue;
		}
	}	

	return 0;
}
