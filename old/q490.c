#include<stdio.h>
#define MAX 101

int main()
{
	char str[MAX][MAX] = {0};
	int i = 0, n, j;

	while(gets(str[i]) != NULL)
		i++;
	i-=1;
	for(n = 0; n < MAX; n++)
	{
		char reg[MAX] = {0};
		int flag = 0;
		
		for(j = i; j >= 0; j--)
			reg[i-j] = str[j][n];
		for(j = 0; j < i; j++)
			if(reg[j] == '\0' || reg[j] == '\n')
				reg[j] = ' ';
			else
				flag = 1;
		if(flag)
			printf("%s\n", reg);
	}

	return 0;
}
