#include<stdio.h>

void print(void);
int main()
{
    print();
    printf("\n");
    return 0;
}
void print()
{
    char c;
    
    if((c = getchar()) != '\n')
        print();
    if(c != '\n')
        putchar(c);
}
