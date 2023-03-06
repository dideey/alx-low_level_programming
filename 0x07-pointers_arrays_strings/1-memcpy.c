#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: the destination of the copied memory
 * @src: the source of the memory
 * @n: number of bytes to be copied
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j = n;

for (i = 0; i < j; j++)
{
dest[i] = src[i];
}

return (dest);
}
