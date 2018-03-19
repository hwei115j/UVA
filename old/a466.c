#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int main()
{
    char c,*str[3] = {"one","two","three"};
    char s[MAX];
    int f,b;
    int j,i,n;

    scanf("%d",&j);
    getchar();
    for(b = 0;b < j;b++)
    {
        f = 0;
        scanf("%s",s);
        getchar();
        for(i = 0;f != 1;i++)
        {
            for(n = 0,f = 0;s[n] != '\0';n++)
                if(s[n] != *(str[i]+n))
                    f++;
            if(f == 0)
                break;
        }
                
        printf("%d\n",f?i:i+1);
    }
}
