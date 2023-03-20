#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees all the allocated memory
 * @d:the struct details
 * Return:
 */
void free_dog(dog_t *d)
{
if (d == NULL)
	return;

free(d->owner);
free(d->name);
free(d);

}
