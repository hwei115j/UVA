#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char ch[1000];
    int i=0;

    while(scanf("%s",ch)!=EOF)
    {
        for(i=0;i<strlen(ch);i++)
			printf("%c",ch[i]-7);
		printf("\n");
    }
	
    return 0;
}

