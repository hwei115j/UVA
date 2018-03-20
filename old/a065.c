#include<stdio.h>
#define foo(n) (n>0)?(n):-(n)

int main()
{
	char ch[8];
	int i;	

	while(scanf("%s",ch) != EOF)
		for(i = 0;i < 6;i++)
			printf((i+1 == 6)?"%d\n":"%d",foo(ch[i]-ch[i+1]));

	return 0;
}

