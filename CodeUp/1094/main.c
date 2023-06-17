/* 1094 : [기초-1차원배열] 이상한 출석 번호 부르기2(설명) */
#include <stdio.h>

int main(void)
{
	int student_num[10000] = {0, };
	int count = 0;
	int i;

	scanf("%d", &count);
	
	for (i = 0; i < count; i++)
	{
		scanf("%d", &student_num[i]);
	}

	for (i = count -1; i >= 0; i-- )
	{
		printf("%d ", student_num[i]);
	}
	
	return 0;
}
