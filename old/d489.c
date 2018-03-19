#include<stdio.h>

int main()
{
    int a,b,c;
    double s;

    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    printf("%.0lf",s*(s-a)*(s-b)*(s-c));

    return 0;

}
