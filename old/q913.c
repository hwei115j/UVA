#include <stdio.h>
#include <stdint.h>

int main()
{
    int in;

    while(scanf("%d", &in) != EOF)
    {
        uint64_t n = in/2+1;

        printf("%llu\n", (((2 + (n - 1) * 2) * n) - 1) * 3 - 6);
    }

    return 0;
}
