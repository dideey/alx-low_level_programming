#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @n: number of elements in the array
 * @a: the array
 * Return: null
 */
void reverse_array(int *a, int n)
{
int i;

for (i = n - 1; i >= 0; i--)
{
_putchar(a[i]);
}
_putchar('\n');

return;
}


