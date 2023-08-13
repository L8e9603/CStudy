#include <stdio.h>

void quick_sort_for_asc(int arr[], int L, int R) {
	int left = L, right = R;
	int pivot = arr[(L + R) / 2];    /* pivot 설정 (pivot = 배열의 가운데 요소 값) */
	int temp;
	
	do
	{
		while (arr[left] < pivot)    /* arr[left] 값이 pivot보다 같거나 크면 정지, arr[left]가 pivot보다 작으면 인덱스 증가 */
		{
			left++;
		}

		while (arr[right] > pivot)    /* arr[right]가 pivot보다 크면 인덱스 감소 */
		{
			right--;
		}

		if (left <= right)    /* left와 right가 멈췄을 때, left가 right보다 왼쪽에 있다면 교환   */
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

			/*left 오른쪽으로 한칸, right 왼쪽으로 한칸 이동*/
			left++;
			right--;
		}
	} while (left <= right);    /* left가 right 보다 오른쪽에 있을 때까지 반복 */
 
	/* recursion */
	if (L < right)
	{
		quick_sort_for_asc(arr, L, right);    /* 왼쪽 배열 재귀적으로 반복 */
	}
	
	if (left < R)
	{
		quick_sort_for_asc(arr, left, R);    /* 오른쪽 배열 재귀적으로 반복 */
	}
}

void quick_sort_for_desc(int arr[], int L, int R) {
	int left = L, right = R;
	int pivot = arr[(L + R) / 2];    /* pivot 설정 (pivot = 배열의 가운데 요소 값) */
	int temp;
	
	do
	{
		while (arr[left] > pivot) /* arr[left] 값이 pivot과 같거나 작다면 정지 (내림차순이므로 pivot과 같거나 작은 값이 왼쪽에 있으면 안됨), 그렇지 않으면 다음 요소로 */
		{
			left++;
		}

		while (arr[right] < pivot) /* arr[right] 값이 pivot과 같거나 크다면 정지 (내림차순이므로 pivot과 같거나 큰 값이 오른쪽에 있으면 안됨), 그렇지 않으면 이전 요소로 */
		{
			right--;
		}

		if (left <= right)    /* left와 right가 멈췄을 때, left가 right보다 왼쪽에 있다면 교환   */
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			/*left 오른쪽으로 한칸, right 왼쪽으로 한칸 이동*/
			left++;
			right--;
		}
	} while (left <= right);    /* left가 right 보다 오른쪽에 있을 때까지 반복 */
 
	/* recursion */
	if (L < right)
	{
		quick_sort_for_desc(arr, L, right);    /* 왼쪽 배열 재귀적으로 반복 */
	}
	
	if (left < R)
	{
		quick_sort_for_desc(arr, left, R);    /* 오른쪽 배열 재귀적으로 반복 */
	}
}

int main(void)
{
	int num_of_elements = 0;
	int a[50] = {0, };
	int b[50] = {0, };
	int s = 0;
	int i;
	
	scanf("%d", &num_of_elements);
	
	for (i = 0; i < num_of_elements; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < num_of_elements; i++)
	{
		scanf("%d", &b[i]);
	}

	quick_sort_for_asc(a, 0, num_of_elements - 1);
	quick_sort_for_desc(b, 0, num_of_elements - 1);
	
	for (i = 0; i < num_of_elements; i++)
	{
		s += a[i] * b[i];
	}

	printf("%d", s);
	
	return 0;
}
