#include <stdio.h>

int main()
{
    int s;

    while(scanf("%d", &s) && s)
    {
        int i, a = 0, b = 0;
        
        for(i = 1; a <= s; i++)
            a+=i;
            
        printf("%d %d\n", a - s, --i);
    }

    return 0;
}
