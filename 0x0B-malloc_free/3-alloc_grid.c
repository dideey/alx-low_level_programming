#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - prints a grid
 * @width: grid width
 * @height:grid height
 * Return:a pointer
 */
int **alloc_grid(int width, int height)
{
int i;

int **darr;

if (width == 0 || width < 0)
{
return (NULL);
}
if (height == 0 || height < 0)
{
return (NULL);
}

darr = malloc(height * sizeof(int *));

if (darr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
darr[i] = malloc(width * sizeof(int));
}

return (darr);
free(darr);
free(darr[i]);
}


