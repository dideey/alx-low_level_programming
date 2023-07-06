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
unsigned int powa, sum;
int len;
powa = 1;
sum = 0;

if (b == NULL)
{
	return (0);
}

for (len = 0; b[len];)
{
	len++;
}

for (len -= 1; len >= 0; len--)
{
	if (b[len] != '0' && b[len] != '1')
	return (0);
	sum += (b[len] - '0') * powa;
	powa *= 2;

}
return (sum);
}

