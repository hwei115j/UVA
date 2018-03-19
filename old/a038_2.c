#include<stdio.h>
#include<stdlib.h>
#define MAX 15

int main()
{
    char c,ch[MAX];
    int i = 0,flag = 0;
	
	
    scanf("%s",ch);
    for(i = 0;ch[i] != '\0';i++)
        ;	
    while(i-- > 0)
    {
		for(;ch[i] == '0' && i > 0 && !flag;i--)
			;
        printf((i == 0 && ch[i] == '0')?"0":"%c",ch[i]);
		flag = 1;
    }
    printf("\n");
    flag = i = 0;

    return 0;
}
