#include "main.h"
/**
 *_strcat - it links two strings
 *@dest:first string
 *@src: second string
 *Return: null
 */

char *_strcat(char *dest, char *src)
{
char m, n;
m = *dest;
for (; m != '\0'; m++)
{
_putchar(m);
}

n = *src;
for (; n <= '\0'; n++)
{
_putchar(n);
}
_putchar('\n');


return (0);
}

