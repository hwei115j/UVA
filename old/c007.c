#include<stdio.h>

int main()
{
    char c;
    int i = 0;
    
    while((c = getchar()) != EOF)
    {
        if(c == '"')
        {
            if(!(i&1))
                printf("``");
            else
                printf("''");
            i++;
        }
		else
			printf("%c",c);
    }
    return 0;
}
