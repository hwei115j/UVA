#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int i;

    for(i=1;i<=5;i++)
    {
        arr[i-1]=i;
        printf("%d ",arr[i-1]);
	}
    printf("\n");
	
    return 0;
	
}
