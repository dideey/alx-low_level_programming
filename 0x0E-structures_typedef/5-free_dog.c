#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees all the allocated memory
 * @d:the struct details
 * Return:
 */
void free_dog(dog_t *d)
{

free(d->name);
free(d->age);
free(d->owner);
free(d);

}
