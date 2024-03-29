#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - outputs numbers
 * Return:null
 * @separator:in btwn numbers
 * @n:number of parameters
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ap, int));

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(ap);
}

