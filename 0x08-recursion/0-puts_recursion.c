#include "main.h"
/**
 * _puts_recursion - outputs a string
 * @s: input string
 * Return: nill
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
_putchar(*s);
s++;
_puts_recursion(s);




}
