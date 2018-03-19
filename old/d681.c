#include<stdio.h>
#define MAX 40

int main()
{
    char c,str[MAX];
    int i = 0,j;

    while((c = getchar()) != EOF)
    {
        if(c != '\n')
        {
            str[i] = c;
            i++;
        }
        else
        {
            int n = 1;
            int a = 0,b = 0;

            for(j = 0;j < i;j++)
                if(str[j] == '0')
                    n*=2;
                else if(str[j] == '1')
                {
                    b+=n;
                    n*=2;
                }
                else if(str[j] == 'o')
                    if(a == 0)
                    {
                        a = b;
                        b = n = 0;
                    }
                    else
                    {
                        a|=b;
                        b = n = 0;
                    }        
                else if(str[j] == 'a')
                    if(a == 0)
                    {
                        a = b;
                        b = n = 0;
                    }
                    else
                    {
                        a&=b;
                        b = n = 0;
                    }
                                
        }    
    }

    return 0;
}
