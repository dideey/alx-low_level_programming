#include "main.h"
/**
 * _memset - copies some number of bytes to a specific memory location
 * @s:the memory location
 * @b:constant number of bytes
 * @n:number of the first bytes.
 * Return:s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
