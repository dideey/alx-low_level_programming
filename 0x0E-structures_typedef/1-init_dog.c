#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialises the struct
 * @d:the variable containing the values
 * @name:dogs identity
 * @age:how old
 * @owner:the owner
 * Return;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
	d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;

return;
}
