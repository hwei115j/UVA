#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int fibon[39]={0,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986};
    int dec;
    int i,a,f;
    
    scanf("%d",&i);
    for(;i > 0;i--)
    {
        f=0;
        scanf("%d",&dec);
        printf("%d = ",dec);
        for(a=38;dec > 0 || a>0;a--)
            if(dec>=fibon[a])
            {
                printf("1");
                dec-=fibon[a];
                f=1;
            }
            else if(dec < fibon[a] && f == 1)
                printf("0");
        printf(" (fib)\n");
    }

    
}
