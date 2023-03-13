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
unsigned int i;
char *ar;

ar = malloc(size * sizeof(char));

if (size == 0 || ar == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
ar[i] = c;
}

return (ar);
free(ar);
}
