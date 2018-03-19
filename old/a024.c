#include<stdio.h>

int main()
{
    int a,b,i;

    while(scanf("%d%d",&a,&b) != EOF)
    {
    int max = 0;

    if(a > b)
    {
        for(i = 1;i <= b;i++)
            if((a%i == 0) && (b%i == 0))
                max = i;
    }
    else
    {
        for(i = 1;i <= a;i++)
            if((a%i == 0) && (b%i == 0))
                max = i;
    }
    printf("%d\n",max);
    }
    return 0;
}
