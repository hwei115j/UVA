#include<stdio.h>
#include<stdlib.h>
#define MAX 15

int main()
{
    char c,ch[MAX];
    int i = 0,flag = 0;
	
	
    while((c = getchar()) != EOF)
    {
        if(c >= '0' && c <= '9')
        {
            ch[i] = c;
            i++;
        }
        else
        {
			
            while(i-- > 0)
            {
                for(;ch[i] == '0' && i > 0;i--)
                    flag++;
                printf((i == 0 && ch[i] == '0')?"0":"%c",ch[i]);
            }
            printf("\n");
            flag = i = 0;
        }
		break;
    }

    return 0;
}
