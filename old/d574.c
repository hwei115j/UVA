#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c,ch;
    int a;
    int i;

    scanf("%d",&a);
    while((c = getchar()) != EOF)
    {
        i = 0;
        ch = c;
        while((c = getchar()) == ch) 
            i++;
        if(i)
            sprintf("%d%c",i,ch);
        else
            sprintf("1%c",ch);
                
           
    }
}
