#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000

int main()
{
    char ch[MAX];
    unsigned char f;
    int i,d;

    while(scanf("%s",ch) != EOF)
    {
        f=1;
        i=strlen(ch);
        if (i & 1)
        {
            for (d = (i - 1) / 2; d >= 0; d--)
                if (ch[d] != ch[i - d - 1])
                    f = 0;
        }
        else
            for(d=i/2;d > 0;d--)
                if(ch[d-1] != ch[i-d])
                    f=0;
        printf(f?"yes\n":"no\n");
    }    
    return 0;
}
