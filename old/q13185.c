#include <stdio.h>

int main()
{
    int t, n;

    scanf("%d", &t);
    while(t-- && scanf("%d", &n) != EOF) {
        int max = 0;
        for(int i = 0; i < n; i++)
            if(i && n%i == 0) max += i;
        if(max == n)
            printf("perfect\n");
        else if(max > n)
            printf("abundant\n");
        else
            printf("deficient\n");
    }
}
