#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -iteratos through array elements performing action on it.
 * @array:the array
 * @size:arr size
 * @action:function
 * Return:nada
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;

for (; i < size; i++)
	action(array[i]);


}
