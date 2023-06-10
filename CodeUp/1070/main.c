/*1070 : [기초-조건/선택실행구조] 월 입력받아 계절 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	int month;
	
	scanf("%d", &month);
	
	switch (month)
	{
		case 12:
		case 1:
		case 2: 
			printf("winter");
			break;
		case 3:
		case 4:
		case 5:
			printf("spring");
			break;
		case 6:
		case 7:
		case 8:
			printf("summer");
			break;
		case 9:
		case 10:
		case 11:	
			printf("fall");
			break;
	}

	return 0;
}
