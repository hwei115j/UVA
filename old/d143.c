#include<stdio.h>

int main()
{
    int i,a,b;

    scanf("%d",&i);
    while(scanf("%d %d",&a,&b) != EOF && i-- > 0)
    {
        if(a == b)
            printf("=\n");
        else
            printf(a > b?">\n":"<\n");
    }    
    return 0;
}
