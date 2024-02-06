#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - searchs for a value using linear algo
* @array:a pointer to first item in array
* @size:size of array
* @value:the value in search
* Return: the index or -1(if fail)
*/

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (size == 0 || !array)
	return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
{
	return (i);

}
}
return (-1);
}
