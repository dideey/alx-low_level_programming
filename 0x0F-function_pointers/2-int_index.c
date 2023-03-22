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
int index;

if (size <= 0)
	return (-1);

if (array == NULL || cmp == NULL)
	return (-1);

for (index = 0; index < size; index++)
{
	if (cmp(array[index] != 0))
		return (index);
}
return (-1);


}
