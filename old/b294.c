#include<stdio.h>

int main()
{
    int n,i;
    int a,add = 0;

    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        scanf("%d",&a);
        add+=(a*i);
    }
    printf("%d\n",add);

    return 0;
}

