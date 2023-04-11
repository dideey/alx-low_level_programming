#include "main.h"
#include <string.h>
/**
 * binary_to_uint - changes binary to int
 * @b:input binary string
 * Return:total
 *
 */
unsigned int binary_to_uint(const char *b)
{
int len, powa, sum, i;
len = strlen(b);
powa = 1;
sum = 0;

if (b == NULL)
{
        return (0);
}


for (i = (len - 1); i >= 0; i--)
{
if (b[i] == 1)
{
	sum += powa;
	powa *= 2;
}
}
return (sum);
}

