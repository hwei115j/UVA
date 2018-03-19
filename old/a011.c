#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main(int argc, char *argv[])
{
    char ch[MAX];
    int i,f=0,add;
    
    memset(ch,'\n',MAX);
    while(fgets(ch,MAX,stdin)!=NULL)
    {
        add=0;
		f=0;
        for(i=0;i<strlen(ch);i++)
		{
			if(ch[i]>=65&&ch[i]<=90||ch[i]>=97&&ch[i]<=122) 
				f++;
			else if(f!=0)
			{
				f=0;
				add++;
			}
			
		}
        printf("%d\n",add);
    }
	
    return 0;
}

