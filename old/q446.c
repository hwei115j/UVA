#include <stdio.h>

void p_bin(int n)
{
    int i;

    for(i = 12; i >= 0; i--)
        printf("%d", (n>>i)&1);
}
int main()
{
    int n, a, b;
    char op;

    scanf("%d%*c", &n);
    while(n-- && scanf("%x %c %x%*c", &a, &op, &b))
        switch(op)
        {
            case '+':
                p_bin(a);
                printf(" + ");
                p_bin(b);
                printf(" = %d\n", a+b);
                break;
            case '-':
                p_bin(a);
                printf(" - ");
                p_bin(b);
                printf(" = %d\n", a-b);
                break;
            default:
                break;
        }

    return 0;
}
