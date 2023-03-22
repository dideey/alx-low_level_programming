#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for a digit
 * @array:input
 * @size:array size
 * @cmp:comperison function
 * Return:null 0r -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
	cmp(array[i]);
return (array[i]);

if (cmp == 0)
	return (-1);


}
