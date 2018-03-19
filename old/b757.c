#include<stdio.h>
#include<string.h>

int main()
{
    float r;
    
    while(scanf("%f",&r) != EOF)
        printf("%g\n",(r*9)/5+32);

}
