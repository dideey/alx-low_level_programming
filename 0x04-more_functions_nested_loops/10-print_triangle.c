#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int hash, dot;

if (size > 0)
{
for (hash = 1; hash <= size; hash++)
{
for (dot = size - hash; dot > 0; dot--)
_putchar(' ');

for (dot = 0; dot < hash; dot++)
_putchar('#');

if (hash == size)
continue;

_putchar('\n');
}
}

_putchar('\n');
}
