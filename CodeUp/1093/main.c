/* 1093 : [기초-1차원배열] 이상한 출석 번호 부르기1(설명) */
#include <stdio.h>
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int main(void)
{
	int students[23] = {0, };
	int student_called = 0;
	int n = 0;
	int i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &student_called);
		students[student_called-1]++;
	}
	
	for(i = 0; i < ARRAY_LENGTH(students); i++)
	{
		printf("%d ", students[i]);
	}
	return 0;
}
