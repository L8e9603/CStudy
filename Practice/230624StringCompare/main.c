#include <stdio.h>

int compare_string(const char* str1, const char* str2);

int main(void)
{
	const char* str1 = "AB";
	const char* str2 = "AC";
	
	int result = compare_string(str1, str2);
	printf("%d\n", result);

	result = compare_string(str1, str1);
	printf("%d\n", result);
	
	result = compare_string(str2, str1);
	printf("%d\n", result);
}

int compare_string(const char* str1, const char* str2)
{
	const char* c1 = str1;
	const char* c2 = str2;
	int result = 0;
	
	while (*c1++ != *c2++ && *c1 != '\0' || *c2 != '\0')
	{
		if (*c1 < *c2)
		{
			result = -1;
		}
		else if (*c1 > *c2)
		{
			result = 1;
		}
	}

	return result;
}
