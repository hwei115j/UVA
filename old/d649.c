#include<stdio.h>

int main()
{
    int n;
    int i,j;
    

    while(scanf("%d",&n) && n)
        for(i = 1;i <= n;i++)
        {
            char ch[1000] = {0};
            int ptr = 0;

            for(j = (n-i);j > 0;j--,ptr++)
                ch[ptr] = '_';
            for(j = 0;j < i;j++,ptr++)
                ch[ptr] = '+';
            ch[ptr] = '\n';
            fprintf(stdout,"%s",ch);
        }

	return 0;
}
