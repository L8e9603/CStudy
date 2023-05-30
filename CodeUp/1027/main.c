#include <stdio.h>

int main(void)
{
	int date, month, year;

	scanf("%4d.%2d.%2d", &year, &month, &date);
	printf("%02d-%02d-%04d", date, month, year);
	
	return 0;
}
