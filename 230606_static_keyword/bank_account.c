#include "bank_account.h"

unsigned int g_chequing = 0u;
unsigned int g_saving = 0u;
static unsigned int s_fee = 20u; /* static 변수는 다른 파일에서 extern 키워드로 접근 불가능 */

void deposit_into_chequing(const unsigned int amount)
{
	/* this could underflow */
	g_chequing += (amount - s_fee);
}

void deposit_into_saving(const unsigned int amount)
{
	/* this could underflow */
	g_saving += (amount - s_fee);
}

/* this function could be used only in this file */
static void set_fee(const unsigned int fee)
{
	s_fee = fee;
}
