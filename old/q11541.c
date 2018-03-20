#include<stdio.h>
#include<math.h>

#define MAX 201
int num(char *str, int *j)
{
	int sum = 0;
	int i, n;

	for(i = 0; str[i] >= '0' && str[i] <= '9' && str[i] != '\0'; i++)
		;
	*j+=i;
	for(n = 0; n < i; n++)	
		sum+=(str[i-n-1]-'0')*pow(10, n);
	return sum;
}
int main()
{
	char str[MAX];
	int t, i, j, n, p;
	
	scanf("%d", &t);
	for(i = 0; i < t && scanf("%s", str) != EOF; i++)
	{
		printf("Case %d: ", i+1);
		for(j = 0, p = 0; str[j] != '\0';p = j)
		{
			n = num(&str[j+1], &j);
			while(n-- > 0)
				printf("%c", str[p]);
		}
	}

	return 0;
}
