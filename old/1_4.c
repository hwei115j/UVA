#include <stdio.h>

int main()
{
    int c;
    
    printf("----------\n");
    printf("  C     F \n");
    for(c=0;c<=300;c+=20)
        printf("%3d | %4.0f\n",c,(float)(c*9/5+32));
    
    return 0;
}

