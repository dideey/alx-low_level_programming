#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of array
 * @a:square array
 * @size: input.
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{

int s1, s2, l;

s1 = 0;
s2 = 0;

for (l = 0; l < size; l++)
{
s1 = s1 + a[l * size + l];
}
for (l = size - 1; l >= 0; l--)
{
s2 += a[l * size + (size - l - 1)];
}
printf("%d, %d\n", s1, s2);

return;
}
