#include "volume_unit_convertor.h"

float bit_to_megabyte(long long int bit)
{
	return (bit / 8 / 1024.0f / 1024.0f);
}
