#include "main.h"
/**
 * _strlen - it tskes a string as an input and states its lenght .
 * @s: is the input string.
 * Return: the length of the string .
 */

int _strlen(char *s)
{
int co;

for (; *s != '\0'; s++)
{
co += 1;
}
return (co);
}
