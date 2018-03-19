#include<stdio.h>
#define MAX 1010

int main()
{
    char buf[MAX];
    int flag = 0;

    while(gets(buf))
    {
        int ascii[128] = {0};
        int min = 1000, max = 0;
        int i, j;

        if(flag)
            printf("\n");
        for(i = 0; buf[i] != '\0'; i++)
            ascii[buf[i]]++;
        for(i = 0; i < 128; i++)
        {
            if(ascii[i] < min && ascii[i])
                min = ascii[i];
            if(ascii[i] > max)
                max = ascii[i];
        }
        for(i = min; i <= max; i++)
        {
            for(j = 128; j >= 0; j--)
                if(ascii[j] == i)
                    printf("%d %d\n", j, ascii[j]);
                    
        }
        flag = 1;
    }

    return 0;
}
