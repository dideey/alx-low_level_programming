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
int len, powa, sum;
len = strlen(b) - 1;
powa = 1;
sum = 0;

if (b[len] != '1' || b[len] != '0')
{
	return (0);
}
if (b == NULL)
{
	return (0);
}

for (; len >= 0; len--)
if (b[len] == '1')
{
	sum += powa;
	powa *= 2;
}


return (sum);
}
