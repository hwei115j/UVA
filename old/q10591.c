#include<stdio.h>

int happy(int num)
{
	if(num/10)
		return ((num%10) * (num%10))+happy(num/10);
	else
		return num*num;
}
int main()
{
	int num;
	int i, n, j;

	scanf("%d", &n);
	for(i = 1; i <= n && scanf("%d", &num) != EOF; i++)
	{
		int sum = happy(num);
		int repeat[1000] = {0};

		while(sum != 1)
		{
			for(j = 0; repeat[j] != 0; j++)
				if(sum == repeat[j])
					goto LA;
			repeat[j] = sum;	
			sum = happy(sum);
		}

		LA:
		printf("Case #%d: %d ", i, num);
		printf((sum == 1)?"is a Happy number.\n":"is an Unhappy number.\n");
	}

	return 0;
}
