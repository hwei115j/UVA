#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    if(a >= 7 && a < 17)
    {
        if(a == 7 && b < 30)
            printf("Off School\n");
        else 
            printf("At School\n");
    }
    else
        printf("Off School\n");
    
    return 0;
}   
