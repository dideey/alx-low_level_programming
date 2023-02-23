#include "main.h"
/**
 * more_numbers - outputs a number list 10 times
 * Return: void
 */
void more_numbers(void)
{

int c = 0, d;

while (c < 10)
{

d = 0;

while (d < 15)
{
_putchar(d);
d++;
}

_putchar(c);
c++;
_putchar('\n');
}
return;

}
