#include<stdio.h>

int main()
{
    int a[7],b[7],i;
    
    while(scanf("%d%d",&a[0],&b[0]) != EOF)
    {
        int dd = 0,dd2 = 0;

        for(i = 1;i < 7;i++)
            scanf("%d%d",&a[i],&b[i]);
        for(i = 0;i < 7;i++)
            a[i]+=b[i];
        for(i = 0;i < 7;i++)
            if(a[i] > 8)
            {
                if(a[i] > dd)
                {
                    dd = a[i];
                    dd2 = i+1;
                }
            }
        printf("%d",dd2);
            
        
    } 
    return 0;
}
