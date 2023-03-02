#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 *
 */

int _strcmp(char *s1, char *s2)
{
int a, b;
a = 0;
while (s1[a] <= '\0')
a++;

b = 0;
while (s2[b] <= '\0')
b++;
if (a == b)
{
_putchar(0);
}
else if (a < b)
{
_putchar(-1);
}
else
{
_putchar(1);
}
return (0);
}
