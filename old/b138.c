#include<stdio.h>

int main()
{
    int a[10],b,i;
    
    while(scanf("%d",&a[0]) != EOF)
    {
        int add = 0;

        for(i = 1;i < 10;i++)
            scanf("%d",&a[i]);
        scanf("%d",&b);
        for(i = 0;i < 10;i++)
            if(a[i] <= (b+30))
                add++;
        printf("%d\n",add);                
    }

    return 0;
}
