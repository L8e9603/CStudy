#include<stdio.h>

int main(void)
{
	goto out_b;

	out_c:
		printf("undo c\n");
	out_b: /* goto문에 의해 여기로 이동되고, 아래쪽 out_a 레이블 이후 코드도 정상 실행됨 */
		printf("undo b\n");
	out_a:
		printf("undo a\n");

	return 0;
}
