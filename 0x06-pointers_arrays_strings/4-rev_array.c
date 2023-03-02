#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @n: number of elements in the array
 * @a: the array
 * Return: null
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;

}

}



