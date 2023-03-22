#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name:input
 * @f:a function that changes name to uppercase
 *
 */
void print_name(char *name, void (*f)(char *))
{
printf("%s\n", name);

f(name);

return;
}
