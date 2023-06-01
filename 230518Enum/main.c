#include <stdio.h>

enum ar{
	AR_Mk17,
	AR_Mk18,
	AR_AK104,
	AR_MCX
};

enum smg{
	SMG_P90,
	SMG_MP5,
	SMG_MP7,
	SMG_MPX
};

int main(void)
{
	enum ar my_ar = AR_Mk17;
	enum smg my_smg = SMG_MPX;

	printf("my_ar: %d\n", my_ar);
	printf("my_smg: %d\n", my_smg);
	printf("\n");

	my_ar = SMG_MPX; /*C에서는 enum끼리 호환 가능*/
	printf("my_ar: %d\n", my_smg);

	return 0;
}
