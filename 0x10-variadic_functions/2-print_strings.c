#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string
 * @separator:separatos
 * @n:parameter no
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list st;
va_start(st, n);

for (i = 0; i < n; i++)
{
str = va_arg(st, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(st);
}

