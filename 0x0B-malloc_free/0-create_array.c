#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates and initializes an array
 * @size: - array size
 * @c: - character string
 * Return: cc if fail null
 *
 */

char *create_array(unsigned int size, char c)
{
char *ar;

if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(char));

*ar = c;

return (ar);
free(ar);
}
