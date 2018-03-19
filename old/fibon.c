#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    unsigned long long int add1 = 1,add2 = 0,new;

    printf("input :");
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        printf((i+1 != n)?"%lld,":"%lld\n",add1);
        new = add1;
        add1+=add2;
        add2 = new;
    }
        
    return 0;   
}
