#include "main.h"
/**
 * print_line - outputs a lin in the terminal
 * Return: void
 * @n: is the line lenght
 */

void print_line(int n)
{
int len;

if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}

_putchar('\n');
}

