#include <stdio.h>

#include "minion.h"

extern unsigned int g_hp;
extern unsigned int g_strength;
extern unsigned int g_gold;

int main(void)
{
	printf("Normal minion:\n");
	printf("hp: %u\n", g_hp);
	printf("strength: %u\n", g_strength);
	printf("gold: %u", g_gold);

	printf("\n");

	go_berserk();
	add_gold(10u);

	printf("Berserk minion:\n");
	printf("hp: %u\n", g_hp);
	printf("strength: %u\n", g_strength);
	printf("gold: %u", g_gold);

	return 0;
}
