#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - checking for malloc
 * @b:integer
 * Return: 98 0r pointer
 */
void *malloc_checked(unsigned int b)
{
void *ma;
ma = malloc(b);

if (ma == NULL)
{
exit(98);
}

return (ma);


}
