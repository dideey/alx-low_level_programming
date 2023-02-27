#include "main.h"
#include <string.h>

/**
 * puts2 - lay out characters
 * @str: input string.
 * Return: nothing
 *
 */

void puts2(char *str)
{
int l, i;
l = strlen(str);
for (i = 0; i < l; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
