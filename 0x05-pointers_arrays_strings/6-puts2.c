#include "main.h"
/**
 * puts2 - lay out characters
 * @str: input string.
 * Return: nothing
 *
 */

void puts2(char *str)
{
int i, n;

n = 0;

while (str[n] != '\0')
n++;

for (i = 0; i < n;  n += 2)
{
_putchar(str[n]);
}

_putchar('\n');

}
