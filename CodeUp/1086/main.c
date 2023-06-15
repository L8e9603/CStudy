/* 1086 : [기초-종합] 그림 파일 저장용량 계산하기(설명) */
#include <stdio.h>

int main(void)
{
	int width, height, bit = 0;
	float result_volume_bit = 0;

	scanf("%d %d %d", &width, &height, &bit);

	result_volume_bit = width * height * bit;

	printf("%.2f MB\n", result_volume_bit / 8 / 1024 / 1024.0f);
	
	return 0;
}
