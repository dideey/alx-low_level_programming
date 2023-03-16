#include <stdlib.h>
#include "main.h"
/**
 * _calloc - creates an array.
 * @nmemb:number of ints.
 * @size:their sizes.
 * Return:ptr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int j;
int *ar;

if (nmemb == 0 || size == 0)
	return (NULL);

ar = malloc(nmemb *size);

if (ar == NULL)
	return (NULL);

for (j = 0; j < nmemb * size; j++)
{
ar[j] = 0;
}
return (ar);
free(ar);


}
