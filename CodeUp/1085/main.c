/* 1085 : [기초-종합] 소리 파일 저장용량 계산하기(설명) */
#include <stdio.h>

long long int volume_calcultating_by_pulse_code_modulation(long long int hz, int bit, int track_count, int sec);

float bit_to_megabyte(long long int bit);

int main(void)
{
	long long int hz = 0;
	int bit, track_count, sec = 0;
	long long int result_volume_bit = 0;
	float result_volume_megabyte = 0;
	
	/* printf("Enter Hz, bit, track count, sec: "); */
	scanf("%lld %d %d %d", &hz, &bit, &track_count, &sec);	

	result_volume_bit = volume_calcultating_by_pulse_code_modulation(hz, bit, track_count, sec);

	result_volume_megabyte = bit_to_megabyte(result_volume_bit);
	
	printf("%.1f MB", result_volume_megabyte);

	return 0;
}

long long int volume_calcultating_by_pulse_code_modulation(long long int hz, int bit, int track_count, int sec)
{
	return (hz * bit * track_count * sec);
}

float bit_to_megabyte(long long int bit)
{
	return (bit / 8 / 1024.0f / 1024.0f);
}

