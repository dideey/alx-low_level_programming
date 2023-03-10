#include "main.h"
/**
 * _strlen - it tskes a string as an input and states its lenght .
 * @s: is the input string.
 * Return: the length of the string .
 */

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len);
}
