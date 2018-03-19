#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int d;
    unsigned char i;

    while(scanf("%d",&d)!=EOF)
    {
        for(i=0;d>>i;i++)
            ;
        while(i) 
        {
            printf("%d",(d>>(i-1))&1?1:0);
            i--;
        }
        printf("\n");
    }
    return 0;
}
