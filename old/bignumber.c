#include<stdio.h>
#include<string.h>
#include"num.h"

int main()
{
	bignum a, b, c;
	int te;

	while(!b_input(&a) && /*b_!input(&b)*/ scanf("%d", &te))
	{
		//b_sub(&a, &b, &c);
		b_mmod(&a, te, &c);
		b_mdiv(&a, te, &b);
		printf("mod = ");
		b_print(&c);
		printf("\n");
		printf("div = ");
		b_print(&b);
		printf("\n");
		//printf("%d\n", b_btoi(&a));
	}

	return 0;
}
