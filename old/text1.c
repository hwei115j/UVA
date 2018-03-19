#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000],ram[100];
    int i=0,n=0,c,x;
    int rom[100];
    
    while(scanf("%s",str)!=EOF)
    {
        while(str[i]!='\0')
        {
            if(str[i]!=' ')     //將輸入的字串用空白鍵分開
            {
                ram[n]=str[i];
                n++;
            }
            else        
            {
                for(c=n;c>=0;c--)
                    rom[x]+=(ram[c]-48)*10^(c-1);
                x++;
            }
            i++;
            
        }
            
    }
}
