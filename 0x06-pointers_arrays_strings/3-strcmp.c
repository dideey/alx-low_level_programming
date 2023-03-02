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

if (*s1 == *s2)
{
_putchar(0);
}
else if (*s1 < *s2)
{
_putchar(-15);
}
else
{
_putchar(15);
}
return (0);
}
