#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searching for value using binary search algorithm
 * @array: a pointer to the first element in the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the index of the value or -1 (if not found)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first, last, mid;

	if (size == 0 || !array)
		return (-1);

	for (first = 0, last = size - 1; first <= last;)
	{
		printf("Searching in array: ");
		for (mid = first; mid < last; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = first + (last - first) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
