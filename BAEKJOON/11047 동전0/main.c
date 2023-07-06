#include <stdio.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int main(void)
{
	int coin_num = 0;
	int total_value_of_coins = 0;
	int value_of_coins[10] = {0, };
	int count = 0;
	int total_num_of_coins = 0;
	size_t i;

	scanf("%d %d", &coin_num, &total_value_of_coins);
	
	for (i = 0; i < coin_num; i++)
	{
		scanf("%d", &value_of_coins[i]);
	}
	
	for (i = coin_num; i > 0; i--)
	{
		if (total_value_of_coins >= value_of_coins[i - 1])
		{
			count = total_value_of_coins / value_of_coins[i - 1];
			total_value_of_coins -= value_of_coins[i - 1] * count;
			total_num_of_coins += count;
			/* printf("total_value_of_coins:%d, value_of_coins[%d]:%d, count:%d\n", total_value_of_coins, i, value_of_coins[i], count); */
		}
	}
	
	printf("%d", total_num_of_coins);
	
	return 0;
}
