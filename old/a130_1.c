#include<stdio.h>
#include<stdlib.h>
#define MAX 101
struct Data
{
    char str[MAX];
    int relevance;
};
int sort(int,int);

int main()
{
    struct Data search[10];
    int ca;
    int big=0;
    int i,n;
        
    scanf("%d",&ca);
    for(n=1;n <= ca;n++)
    {
		big=0;
        for(i=0;i < 10;i++)
        {
            scanf("%s %d",search[i].str,&search[i].relevance);
            big = sort(search[i].relevance,big);
        }

        printf("Case #%d:\n",n);
        for(i=0;i < 10;i++)
            if(search[i].relevance == big)
                printf("%s\n",search[i].str);
    }
    
        
    return 0;
}
int sort(int i,int big)
{
    if(i>big)
        return i;
    else
        return big;
}
