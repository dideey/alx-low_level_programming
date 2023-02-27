#include "main.h"
/**
 * print_rev - it outputs a string backwards
 * @s: the string being passed.
 * Return: null
 */

void print_rev(char *s)
{

for (; *s != '\0'; s--)
{
_putchar(*s);
}
_putchar('\n');
return;

}
