#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds integers
 * Return:total sum
 * @n:number of parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;

va_list ap;
va_start(ap, n);

if (n == 0)
	return (0);

for (i = 0; i < n; i++)
	sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
