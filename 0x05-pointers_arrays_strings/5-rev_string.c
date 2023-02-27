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
int i, n;

char temp;
temp = *s;


n = 0;

while (s[n] != '\0')
n++;

_putchar(temp);
_putchar('\n');


for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');




}

