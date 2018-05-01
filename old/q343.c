#include <stdio.h>
#include <string.h>
#define MAX 100

int mexp(int a, int b)
{
    return (!b)?1:a*mexp(a, b - 1);
}

int iszero(char *str)
{
    return (str[0] == '0' && str[1] == 0)?0:1;
}

int stoi(char *str, int n)
{
    int i = 0, sum = 0, len = strlen(str);
    
    for(i = len - 1 ; i >= 0; i--)
    {
        if(str[i] >= '0' && str[i] <= '9')
            sum += (str[i] - '0') * mexp(n, len - 1 - i);
        else
            sum += (str[i] - 'A' + 10) * mexp(n, len - 1 - i);
    }

    return sum;

}

int check(char *str, int n)
{
    int i, num;
   
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] >= '0' && str[i] <= '9')
        {
            if((str[i] - '0') >= n)
                return 0;
        }
        else
        {
            if((str[i] - 'A' + 10) >= n)
                return 0;
        }

    return 1;
}
int main()
{
    char sta[MAX], stb[MAX]; 

    while(scanf("%s%s", sta, stb) != EOF)
    {
        int i, j, flag = 1;

        for(i = 2; flag && i <= 36; i++)
            for(j = 2; flag && j <= 36; j++)
                if(check(sta, i) && check(stb, j) && (stoi(sta, i) == stoi(stb, j)))
                    flag = 0;
        if(flag)
            printf("%s is not equal to %s in any base 2..36\n", sta, stb);
        else
            printf("%s (base %d) = %s (base %d)\n", sta, i-1, stb, j-1);
    }

    return 0;
}
