#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5609
int main()
{
    unsigned int t;
    unsigned int i,j;

    while(scanf("%d",&t) && t > 0)
    {
		while(t > 10)
		{
			char ch[MAX] = {0};
			int str = 0;

			for(j = 0;t > 10 && j < 80;j++)
			{
				for(i = 0;i < 10;i++)
				{
					ch[str] = '=';
					ch[str+1] = '_';
					ch[str+2] = '=';
					ch[str+3] = '|';
					ch[str+4] = '|';
					ch[str+5] = '|';
					ch[str+6] = '\n';
					str+=7;
				}
				t-=10;
			}
			ch[str+1] = '\0';
			printf("%s",ch);
		}
		while(--t > 0)
			printf("=_=|||\n");
		printf("=_=|||\n");
    }
    return 0;
}
