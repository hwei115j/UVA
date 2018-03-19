#include <stdio.h>
void strcpy_t (char *,char *);

int main(int argc, char *argv[])
{
    char s[100],t[100];

    scanf("%s",t);
    printf("t=%s\n",t);
    strcpy_t(s,t);
    printf("s=%s\n",s);
    
    return 0;
}

void strcpy_t(char *s,char *t)
{
    while(*s++ = *t++)
        ;
}
