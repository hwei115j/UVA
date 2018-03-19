#include <stdio.h>

int main()
{
    int f;
    
    printf("----------\n");
    printf("  F     C \n");
    for(f=0;f<=300;f+=20)
        printf("%3d | %4.2f\n",f,(float)(5*(f-32)/9));
    
    return 0;
}

