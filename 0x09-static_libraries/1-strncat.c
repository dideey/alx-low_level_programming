#include "main.h"
/**
 * _strncat - links strings and null terminates them
 * @dest: first sting
 * @src: second sring
 * @n: specific number of bytes
 * Return:dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;

while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}



