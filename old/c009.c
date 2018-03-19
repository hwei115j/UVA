#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int main()
{
    char str[MAX];    
    int a;

    while((scanf("%s",str)) && str[0] != '-')
    {
        if(str[0] != '0')
        {
            sscanf(str,"%d",&a);
            printf("0x%x\n",a);
        }
        else
        {
            sscanf(str,"%x",&a);
            printf("%d\n",a);
        }
    }
    
    return 0;
}
