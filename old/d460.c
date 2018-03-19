#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    printf("%d\n",590*(a >=6 && a<= 11)+790*(a >= 12 && a <= 17)+890*(a >=18 && a <= 59)+399*(a >= 60));
    
    return 0;
}
