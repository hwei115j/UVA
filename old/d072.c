#include<stdio.h>

int main()
{
    int n,year;
    int i;

    scanf("%d",&n);
    getchar();
    
    for(i=1;scanf("%d",&year) != EOF;i++)
    {
        if(year%4 == 0 && year%100 != 0 || year%400 == 0)
            printf("Case %d: a leap year\n",i);
        else
            printf("Case %d: a normal year\n",i);
    }
}
