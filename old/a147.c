#include<stdio.h>

int main()
{
    int n,i;
    
    while(scanf("%d",&n) != EOF && n)
    {
        for(i = 1;i < n;i++)
            if(i%7)
                printf((i==1)?"%d":" %d",i);
        printf("\n");
    }
        
    return 0;   
}
