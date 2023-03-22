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

if (size <= 0)
	return (-1);

if (array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i] != 0))
		return (array[i]);
}
return (-1);


}
