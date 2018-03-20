#include<stdio.h>

#define MAX 500
#define SWAP(x, y) do{ int R; R = x; x = y; y = R;}while(0) 
#define F(x) ((x) >= 0)?(x):(-(x))

int main()
{
	int r;
	int s[MAX], reg[MAX];

	scanf("%*d");
	while(scanf("%d", &r) != EOF)
	{
		int i, j, x, sum = 0;

		for(i = 0; i < r; i++)
			scanf("%d", &s[i]);	
		for(i = 0; i < r; i++)
			for(j = i; j < r; j++)
				if(s[i] < s[j])
					SWAP(s[i], s[j]);
		x = (r&1)?r/2+1:r/2;
		for(i = 0; i < r; i++)
			sum += F(s[x-1] - s[i]);
		printf("%d\n", sum);			
	}

	return 0;
}
