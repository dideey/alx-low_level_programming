#include "main.h"
#include <string.h>
/**
 * rev_string - it reverses a sting.
 * @s: the string input
 * Return: void
 * srlen -gets lenght
 */

void rev_string(char *s)
{
int a = strlen(s - 1);

for (; a >= 0; s--)
{
_putchar(s[a]);
}
_putchar('\n');
return;

}

