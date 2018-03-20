#include<stdio.h>
#define MAX 1001

int main()
{
	char str[MAX],pr[MAX];
	int i,j,n = 1;
	int m;

	scanf("%s",str);
	while(str[n] != '\0')
		n++;
	for(i = 0;i < n;i++)
	{
		for(j = i,m = 0;j < n+i;j++,m++)
			pr[m] = str[j%n];
		pr[m] = '\0';
		printf("%s\n",pr);
	}
	return 0;
}
