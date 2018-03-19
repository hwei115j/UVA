#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int a;
    int i,add;   

    scanf("%d",&a);
    while(a!=0)
    {
        add=0;
        printf("The parity of ");
        for(i=0;a>>i > 0;i++)
            ;
        for(;i>0;i--)
        {
            if((a>>i-1)&1)
            {
                printf("1");
                add++;
            }
            else
                printf("0");
        }
        printf(" is %d (mod 2).\n",add);
                   
        scanf("%d",&a);
    }
}
