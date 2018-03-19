#include<stdio.h>
#include<string.h>

int main()
{
    char a=0,b[10]="abcd";
    int i=0;
    printf("i=%d a=%d b=%d b[1]=%d\n",sizeof(i),sizeof(a),sizeof(b),sizeof(b[1]));
    printf("strlen(b)=%d\n",strlen(b));
    return 0;
}
