#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    int n = 0;

    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            n++;
            while(isalpha(ch = getchar()));
        }
        if(ch == '\n')
        {
            printf("%d\n", n);
            n = 0;
        }
    }

    return 0;
}
