#include <stdio.h>

#include "print_ascii_table.h"

void print_ascii_table(void)
{
	const int MIN_ASCII = 32;
	const int MAX_ASCII = 126;
	const int NUM_CHARS = MAX_ASCII - MIN_ASCII + 1;
	const int NUM_COLS = 3;
	const int NUM_ROWS = (NUM_CHARS + NUM_COLS - 1) / NUM_COLS; /* 마지막 행은 열이 몇개 비어 있기 때문에 NUM_CHARS에 NUM_COLS - 1을 더하여 없는 열을 보정해줘 정사각형으로 만든 것 */

	int r;
	int ch;
	
	printf("Dec Hex  Char\tDec Hex  Char\tDec Hex  Char\n"); /* \ 맨 위에 3열 출력, t: 탭 문자 */
	
	/* 마지막 줄은 생략하고 출력 */
	for (r = 0; r < NUM_ROWS - 1; ++r)
	{
		ch = MIN_ASCII + r;
		printf("%03d %#X %c\t", ch, ch, ch); /* 1열 출력 */

		ch += NUM_ROWS;
		printf("%03d %#X %c\t", ch, ch, ch);

		ch += NUM_ROWS;
		printf("%03d %#X %c\n", ch, ch, ch);
	}
	
	/* 마지막 행 출력, 남은 아스키 넘버만큼 열 반복 */
	for (ch = MIN_ASCII + r; ch <= MAX_ASCII; ch += NUM_ROWS)
	{
		printf("%03d %#X %c\t", ch, ch, ch);
	}
}
