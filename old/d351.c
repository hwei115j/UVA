#include<stdio.h>
#define MAX 12
int main()
{
	char ch[MAX]={0},c;
	int i;

	while((c = getchar()) != EOF)
	{
		int n = 7;
		char ascii = 0;
		
		for(i = 0;i < 10 && (c = getchar()) != EOF;i++)
			ch[i] = c;
		for(i = 0;i < 10;i++)
		{
			if(ch[i] == ' ' || ch[i] == '.')
				n--;
			else if(ch[i] == 'o')
			{
				ascii+=(1<<n);
				n--;
			}
		}
		printf((ascii > 0)?"%c":"",ascii);
	}	

	return 0;
}
