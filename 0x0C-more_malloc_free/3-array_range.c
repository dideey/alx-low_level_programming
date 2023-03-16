#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of min and max
 * @min:smallest int
 * @max:largest int
 * Return:pointer
 */

int *array_range(int min, int max)
{
int *arr;
int i, t;
i = 0;
t = min;

if (min > max)
	return (NULL);

arr = malloc(max - min + 1 * sizeof(int));

if (arr == NULL)
	return (NULL);
while (i < max - min)
{
arr[i++] = t++;
}
return (arr);


}
