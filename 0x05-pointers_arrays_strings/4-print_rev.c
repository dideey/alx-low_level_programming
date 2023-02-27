#include "main.h"
/**
 * print_rev - outputs the string reverse
 * @s: the input string.
 * Return: null
 */

void print_rev(char *s)
{
int a, n;

n = 0;

while (s[n] != '\0')
n++;

for (a = n - 1; a >= 0; a--)
{
_putchar(s[a]);
}

_putchar('\n');
return;
}
