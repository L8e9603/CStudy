/* 11399 ATM */
/* 동적 메모리 배우고 다시 풀기, 버블정렬, 재귀함수, sum 함수 알고리즘은 정답임, num의 값을 길이로 가지는 배열 동적 생성 필요 */
#include <stdio.h>

int* bubble_sort(int arr[], int n);

int minimum_time_recursive(int arr[], int n);

int minimum_time_sum(int arr[], int n);

int main(void)
{
	int num = 0;
	int p[5] = {0, };
	int asccending_p[5] = {0, };
	int* asccending_p_ptr = asccending_p;
	int result = 0;
	int i;
	
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &p[i]);
	}
	
	/* 배열 오름차순으로 버블정렬 */
	asccending_p_ptr = bubble_sort(p, 5);
	result = minimum_time_sum(asccending_p_ptr, 5);
	printf("%d", result);
	
	return 0;
}

int* bubble_sort(int arr[], int n)
{
	int i, j, temp = 0;

	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	}
	
	return arr;
}

int minimum_time_recursive(int arr[], int n)
{
	int i;
	int sum = 0;

	if (n == 0)
	{
		return 0;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		
		return sum + minimum_time_recursive(arr, n - 1);
	}
}

int minimum_time_sum(int arr[], int n)
{
	int i;
	int j;
	int result = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			result += arr[j];
		}
	}	
	
	return result;
}
