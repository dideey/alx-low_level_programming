#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @n: number of elements in the array
 * @a: the array
 * Return: null
 */
void reverse_array(int *a, int n)
{
int temp;
int i = 0;
int j = n - 1;

for (i = 0; i < j; i++, j--)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
_putchar(temp);
_putchar('\n');
}

