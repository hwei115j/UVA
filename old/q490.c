#include <stdio.h>
#include <string.h>
#define MAX 110

int main()
{
    char str[MAX][MAX] = {};
    int max = 0;
    int n, i, j;

    for(n = 0; scanf("%[^\n]%*c", str[n]) != EOF; n++)
        if(max < strlen(str[n]))
            max = strlen(str[n]);

    for(i = 0; i < max; i++)
    {
        for(j = n-1; j >= 0; j--)
            (!str[j][i])?printf(" "):printf("%c", str[j][i]);
           
        printf("\n");
    }

    return 0;
}
