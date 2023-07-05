#include <stdio.h>

#include <stdlib.h>

void bubble_sort(int arr[], int n)
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
}

void quick_sort(int arr[], int L, int R) {
      int left = L, right = R;
      int pivot = arr[(L + R) / 2];    /* pivot 설정 (가운데) */
      int temp;
      do
      {
        while (arr[left] < pivot)    /* left가 pivot보다 큰 값을 만나거나 pivot을 만날 때까지 */
            left++;
        while (arr[right] > pivot)    /* right가 pivot보다 작은 값을 만나거나 pivot을 만날 때까지 */
            right--;
        if (left<= right)    /* left가 right보다 왼쪽에 있다면 교환 */
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            /*left 오른쪽으로 한칸, right 왼쪽으로 한칸 이동*/
            left++;
            right--;
        }
      } while (left<= right);    /* left가 right 보다 오른쪽에 있을 때까지 반복 */
 
    /* recursion */
    if (L < right)
        quick_sort(arr, L, right);    /* 왼쪽 배열 재귀적으로 반복 */
 
    if (left < R)
        quick_sort(arr, left, R);    /* 오른쪽 배열 재귀적으로 반복 */
}

int main(void)	
{
	int* ptr = NULL;
	int ropes_num;
	int sum_of_ropes_weight = 0;
	int max_weight;
	int i, j;

	scanf("%d", &ropes_num);
	
	ptr = (int*)malloc(sizeof(int) * ropes_num);

	for (i = 0; i < ropes_num; i++)
	{
		scanf("%d", &ptr[i]);
	}

	/* bubble_sort(ptr, ropes_num); */ /* 시간 복잡도 O(n) = N^2, 시간 초과 발생 */
	quick_sort(ptr, 0, ropes_num - 1); * 시간 복잡도 O(n log n) */

	max_weight = *(ptr + ropes_num - 1); /* 최대 중량 = 가장 약한 로프 하중 * 로프 개수 */
	j = 2;

	for (i = ropes_num - 2; i >= 0; i--)
	{
		if (max_weight < *(ptr + i) * j)
		{
			max_weight = *(ptr + i) * j;	
		}
		j++;
	}

	printf("%d", max_weight);
	free(ptr);

	return 0;
}
