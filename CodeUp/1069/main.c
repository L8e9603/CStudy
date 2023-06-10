/*1069 : [기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기(설명)*/
#include <stdio.h>

int main(void)
{
	char grade;
	
	scanf("%c", &grade);
	
	switch (grade)
	{
		case 'A':
			printf("best!!!");
			break;
		case 'B':
			printf("good!!");
			break;
		case 'C':
			printf("run!");
			break;
		case 'D':
			printf("slowly~");
			break;
		default:
			printf("what?");
			break;
	}

	return 0;
}
