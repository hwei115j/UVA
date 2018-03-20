#include <stdio.h>
#include <string.h>

#define MNUM 3000
#define MAX 1001

typedef struct big
{
	unsigned short int num[MNUM];
    short int size;
}bignum;

int b_set(bignum *a, char *s)
{
	int i = MNUM-1, j = 0, r = strlen(s);
    
    a->size = r;
	while(i >= r)
		a->num[i--] = 0;
	while(i >= 0)
		a->num[i--] = s[j++] - '0';
	
	return 0;
}

/*return = a * b */
bignum b_mul(bignum *a, bignum *b)
{
	int i, j;
    bignum c = {0};

	for(i = 0; i < a->size; i++)
		for(j = 0; j < b->size; j++)
			if(i + j < a->size + b->size)
				c.num[i+j] += a->num[i]*b->num[j];
	for(i = 0; i < MNUM; i++)
	{
		c.num[i+1] += c.num[i]/10;
		c.num[i] %= 10;
	}
    c.size = a->size + b->size;

	return c;
}

int b_print(bignum *a)
{
	int i = MNUM - 1;

	while(a->num[i] == 0 && i >= 0)
		i--;
	if(i < 0 && printf("0"))
		return 0;
	while(i >= 0)
		printf("%d", a->num[i--]);
    printf("\n");

	return 0;
}


int main()
{
    static bignum fact[MAX];
    char str[MAX];
    int n, i;

    fact[0].num[0] = 1;
    fact[0].size = 1;

    for(i = 1; i < MAX; i++)
    {
        sprintf(str, "%d", i);
        b_set(&fact[i], str);
        fact[i] = b_mul(&fact[i], &fact[i-1]);
    }
    while(scanf("%d", &n) != EOF && printf("%d!\n",n))
        b_print(&fact[n]);

    return 0;
}
