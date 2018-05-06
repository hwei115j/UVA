#include <stdio.h>
#include <math.h>
#define MAX 200

int GCD( int a, int b )  
{  
    return a%b?GCD( b, a%b ):b;  
}

int prime(int *num, int n)
{
    int i, j, add = 0;

    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(GCD(num[i], num[j]) == 1)
                add++;

    return add;
}

int main()
{
    int n, num[MAX];

    while(scanf("%d", &n) && n)
    {
        int i, reg;

        for(i = 0; i < n; i++)
            scanf("%d", &num[i]);
        if((reg = prime(num, n)) == 0)
            printf("No estimate for this data set.\n");
        else
        {
            double x = (n*(n-1)/2.0)/(double)reg;

            printf("%.6lf\n", sqrt(6.0*x)); 
        }
    }

    return 0;
}
