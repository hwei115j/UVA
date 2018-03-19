#include<stdio.h>
#define min(a, b, c) ((a < b)?(a < c)?a:c:(b < c)?b:c)

int main()
{
    int n, i;
    double a1, a2, b1, b2, c1, c2, c3;

    scanf("%d", &n);
    for(i = 1; scanf("%lf%lf%lf%lf%lf%lf%lf", &a1, &a2, &b1, &b2, &c1, &c2, &c3) && i <= n; i++)
    {
        double c = (c1+c2+c3 - min(c1, c2, c3))/2;
        double add = a1+a2+b1+b2+c;

        if(add >= 90)
            printf("Case %d: A\n", i);
        else if(add >= 80)
            printf("Case %d: B\n", i);
        else if(add >= 70)
            printf("Case %d: C\n", i);
        else if(add >= 60)
            printf("Case %d: D\n", i);
        else
            printf("Case %d: F\n", i);
    }
    
    return 0;
}
