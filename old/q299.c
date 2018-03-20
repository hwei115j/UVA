#include<stdio.h>

#define MAX 55
#define SWAP(x, y) do{int r; r = x; x = y; y = r;}while(0)

int main()
{
	int n, l;
	int num[MAX] = {0};

	scanf("%d", &n);
	while(n-- && scanf("%d", &l))
	{
		int i, j;
		int cont = 0;

		for(i = 0; i < l; i++)
			scanf("%d", &num[i]);
		for(i = 0; i < l - 1; i++)
			for(j = 0; j < l - 1 - i; j++)
				if(num[j] > num[j+1] && ++cont)
					SWAP(num[j], num[j+1]);
		printf("Optimal train swapping takes %d swaps.\n", cont);
	}
	
	return 0;
}
