#include <stdio.h>
#include <string.h>

void t_print(char *);

int main(int argc, char *argv[4])
{
    char *arr[4]={"XD..","XDD..","orz..","OGC.."};
    
    t_print(arr);
    return 0;
}

void t_print(char *arr1[])
{
    int i;
    for(i=0;i<4;i++)
        printf("%s\n",arr1[i]);
}

