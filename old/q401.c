#include <stdio.h>
#include <string.h>

int ispalin(char *str)
{
    int i, n;
    
    for(i = 0, n = strlen(str) - 1; i <= n; i++, n--)
        if(str[i] != str[n])
            return 0;
    return 1;
}

int isreverse(char c1, char c2)
{
    char character[] = {"AEHIJLMOSTUVWXYZ12358"};
    char reverse[]   = {"A3HILJMO2TUVWXY51SEZ8"};
    int i;

    for(i = 0; character[i] != c1 && character[i]; i++);

    if(c2 == reverse[i])
        return 1;
    return 0;
}
int ismirror(char *str)
{
    int i, n;
    
    for(i = 0, n = strlen(str) - 1; i <= n; i++, n--)
        if(!isreverse(str[i], str[n]))
            return 0;
    return 1;
}
int main()
{
    char str[30];

    while(gets(str) != NULL)
    {
        if(!ispalin(str) && !ismirror(str))
            printf("%s -- is not a palindrome.\n\n", str);
        if( ispalin(str) && !ismirror(str))
            printf("%s -- is a regular palindrome.\n\n", str);
        if(!ispalin(str) &&  ismirror(str))
            printf("%s -- is a mirrored string.\n\n", str);
        if( ispalin(str) &&  ismirror(str))
            printf("%s -- is a mirrored palindrome.\n\n", str);
    }

    return 0;
}
