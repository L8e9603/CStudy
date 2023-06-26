#include <stdio.h>

size_t get_string_length(const char* string);

size_t get_string_length2(const char* string);

size_t get_string_length3(const char* string);

size_t get_string_length4(const char* string);

int main(void)
{	
	int length = 0;
	char string[] = "hello";
	char string2[] = "World!";
	char string3[] = "\0";
	
	length = get_string_length3(string);
	printf("%d\n", length);
	
	length = get_string_length3(string2);
	printf("%d\n", length);

	length = get_string_length3(string3);
	printf("%d\n", length);
}

size_t get_string_length(const char* string)
{
	size_t i;

	for (i = 0; string[i] != '\0'; i++)
	{
	}
	
	return i;
}

/* 개미 눈곱만큼 더 빠른 문자열 길이 구하기 함수 만들어보기*/
size_t get_string_length2(const char* string)
{
	size_t length;
		
	for (length = 0; *string != '\0'; string++)
	{
		length++;
	}
	
	return length;
}


/* 개미 눈곱만큼 더 빠른 문자열 길이 구하기 함수 모범코드 */
/* 모범 코드2 */
size_t get_string_length3(const char* string)
{
	const char* p = string;
	
	while (*p++ != '\0')
	{
	}
	
	return string - p - 1;
}

/* 모범 코드1 */
size_t get_string_length4(const char* string)
{
	size_t length = 0;
	
	while (*string++ != '\0')
	{
		length++;
	}	
	
	return length;
}

