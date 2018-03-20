#include<stdio.h>
#define MAX 10001

void sort_f(int *s, int n, int i)
{
	int j;

	for(j = 0; j < i; j++)
	{
		int t;

		if(s[j] < n && s[j+1] >= n) 
		{
			for(t = i-1; t > j; t--)
				s[t+1] = s[t];
			s[j+1] = n;
			return;
		}	
		if(j+1 == i)
		{
			s[j+1] = n;		
			return;
		}
	}
	s[1] = n;
	return;
}
int main()
{
	int i, n ,sort[MAX] = {0};

	for(i = 1; scanf("%d", &n) != EOF; i++)
	{
		sort_f(sort, n, i);
		if(i&1)
			printf("%d\n", sort[i/2 + 1]);
		else
			printf("%d\n", (sort[i/2] + sort[i/2 + 1])/2);
	}
	
	return 0; 
}
