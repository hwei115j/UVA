#include<stdio.h>
#define MAX 1001
int main()
{
    int n,i,j;
    int num[MAX],reg;
    
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0;i < n;i++)
            scanf("%d",&num[i]);
        for(i = 0;i < n;i++)
            for(j = i+1;j < n;j++)
                if(num[i] > num[j])
                {
                    reg = num[i];
                    num[i] = num[j];
                    num[j] = reg;
                }
        for(i = 0;i < n;i++)
            printf((i+1 != n)?"%d ":"%d\n",num[i]);
    }

    return 0;

}
