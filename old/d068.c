#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    printf("%d\n",a*(a <= 50)+(a-1)*(a > 50));
    
    return 0;
}
