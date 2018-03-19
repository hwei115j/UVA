#include<stdio.h>

int main()
{
    int i,a;
    int three,four,five;
    
    three = four = five = 0;
    scanf("%d",&i);
    while(i-- > 0)
    {
        scanf("%d",&a);
        switch(a%3)
        {
            case 0:
                three++;
                break;
            case 1:
                four++;
                break;
            case 2:
                five++;
                break;
            default:
                break;
        } 
   }
    printf("%d %d %d",three,four,five);
    return 0;
}

