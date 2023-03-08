#include "main.h"
/**
 * _puts_recursion - outputs a string
 * @s: input string
 * Return: nill
 *
 */
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] != '\0')
{
i++;
_putchar(s[i]);
}
return;
}
