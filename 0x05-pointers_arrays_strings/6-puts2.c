#include "main.h"
/**
 * puts2 - lay out characters
 * @str: input string.
 * Return: nothing
 *
 */

void puts2(char *str)
{
int n = 0;

for (; str[n] != '\0'; n += 2)
{
_putchar(str[n]);
}

_putchar('\n');

}
