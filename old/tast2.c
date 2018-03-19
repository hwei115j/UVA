#include<stdio.h>

int main()
{
    struct date
    {
        int a;
        int b;
        char ch[20];
    }tast;
    struct date *ptr;
    printf("tast=%dbyte *ptr=%dbyte\n",sizeof(tast),sizeof(ptr));
    return 0;
}
