#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main(int argc, char *argv[])
{
    char ch[MAX];
    int vi[10];
    int i,f=0,add;
    
    memset(ch,'\n',MAX);
    while(fgets(ch,MAX,stdin)!=NULL)
    {
        for(i=1;i<MAX;i++)
            if(a[i]==' '&&a[i]+2==' ')
            {
                vi[f]=a[i]-30;
                f++;
            }
            else if(a[i+2]==0)
            {
                vi[f]=10;
                f++;
            }
	}
    return 0;
}

