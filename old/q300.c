#include <stdio.h>
#include <string.h>

int main()
{
    char haab[][14] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
    char tzolkin[][14] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    char str[10];
    int num, year;
 
    scanf("%d", &num);
    printf("%d\n", num);
    while(scanf("%d.%s%d", &num, str, &year) != EOF)
    {
        int day, i;
        int d;

        for(i = 0; i < 19 && strcmp(str, haab[i]); i++);
        day = i * 20 + num;
        day += year * 365;
        d = day % 13 + 1;
        printf("%d %s %d\n", d, tzolkin[day % 20], day / 260);
    }

    return 0;
}
