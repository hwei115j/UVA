#include<stdio.h>

int main()
{
    unsigned int a,b,add=0;
    int i;

    scanf("%d %d",&a,&b);
    if(a & 1)
        for(i=a+1;i <= b;i+=2)
            add+=i;
    else
        for(i=a;i <= b;i+=2)
            add+=i;
    printf("%d\n",add);       
        
    return 0;
}
