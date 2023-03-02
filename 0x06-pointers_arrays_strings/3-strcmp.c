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
int i = 0;

for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)

if (s1[i] == s2[i])
{
_putchar(0);
}
else if (s1[i] < s2[i])
{
_putchar(-15);
}
else
{
_putchar(15);
}
return (0);
}
