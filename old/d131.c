#include<stdio.h>
#define MAX 101

int main()
{
	int cons[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,\
					73,79,83,89,97,0};
	int num[MAX][MAX] = { 0 };
	int i, j, k;
	int n;
	
	for(i = 2; i < MAX; i++)
		for(j = 0, k = i; cons[j] && k != 1; j++)
			while(k != 1 && k % cons[j] == 0)
			{
				num[i][cons[j]]++;
				k/=cons[j];
			}	
			
	
	while(scanf("%d", &n) != EOF && n)
	{
		int reg[30] = { 0 };
		k = 1;
 
		for(i = 0; cons[i]; i++, k++)
			for(j = 2; j <= n ; j++)
				if(num[j][cons[i]])
					reg[k]+=num[j][cons[i]];				

		
		printf("%3d! =", n);
		for(i = 1; i < k && reg[i]; i++)
			if(i%16)
				printf(reg[i+1]?"%3d":"%3d\n", reg[i]);
			else 	
				printf(reg[i+1]?"\n%9d":"\n%9d\n", reg[i]);
			
	}

	return 0;
}
