/* 11399 ATM */

#include <stdio.h>

#include <stdlib.h>

int bubble_sort(int arr[], int n);

int minimum_time_recursive(int arr[], int n);

int minimum_time_sum(int arr[], int n);

int main(void)
{
	int num = 0;
	int* p = NULL;
	int result = 0;
	int i;
	
	scanf("%d", &num);

	p = (int*)malloc(sizeof(int) * num); /* 입력받은 숫자만큼 힙에 배열 공간잡기 */

	for (i = 0; i < num; i++)
	{
		scanf("%d", &p[i]);
	}
	
	bubble_sort(p, num); /* 배열 오름차순으로 버블정렬 */
	result = minimum_time_sum(p, num);
	printf("%lld", result);
	
	free(p);
	
	return 0;
}

int bubble_sort(int arr[], int n)
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
	
	return 0;
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
