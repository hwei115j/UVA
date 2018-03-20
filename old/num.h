#define MNUM 100

typedef struct big
{
	int32_t num[MNUM];
}bignum;

int b_add(bignum *, bignum *, bignum *);
int b_sub(bignum *, bignum *, bignum *);
int b_mul(bignum *, bignum *, bignum *);
int b_div(bignum *, bignum *, bignum *);
int b_mdiv(bignum *, int, bignum *);
int b_mod(bignum *, bignum *, bignum *);
int b_mmod(bignum *, int, bignum *);
int b_set(bignum *, char *);
int b_input(bignum *);
int b_print(bignum *);
int b_btoi(bignum *);
int b_itob(int, bignum *);
