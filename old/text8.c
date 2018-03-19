#include <stdio.h>
#include <string.h>
#define MIN 16
int main(int argc, char *argv[])
{
    int a[5]={0};
    int *b=&a; 
    printf("*a=%lx,&a=%lx,a=%lx\n",*a,&a,a);
    printf("  &a[0]=%lx,a[0]=%lx\n",&a[0],a[0]);
    printf("*b=%lx,&b=%lx,b=%lx\n",*b,&b,b);
    return 0;
}

