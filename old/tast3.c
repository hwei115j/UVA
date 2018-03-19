#include<stdio.h>

int main()
{
    char val[10]={0};
    int sp=9,i;

    val[sp--]=1;
    
    for(i=0;i<10;i++)
        printf("sp=%d val[%d]=%d\n",sp,i,val[i]);
    
    return 0;
}
