#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    double hi[128];
    hi['W'] = 1.0;
    hi['H'] = 1/2.0;
    hi['Q'] = 1/4.0;
    hi['E'] = 1/8.0;
    hi['S'] = 1/16.0;
    hi['T'] = 1/32.0;
    hi['X'] = 1/64.0;
    while(scanf("%s", str) && str[0] != '*') {
        int i = 1;
        int cont = 0;
        double max = 0;
        while(str[i] != '\0') {
            if(str[i] == '/') {
                if(max == 1.0) cont++;
                max = 0;
            }
            max += hi[str[i++]];
        }
        printf("%d\n", cont);
    }
    return 0;
}
