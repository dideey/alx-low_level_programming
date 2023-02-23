#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to get printed
 */

void print_number(int n)
{

	unsigned int p = n;

	if (n < 0)
	{
	_putchar('-');
	p = -p;
	}
	if ((p / 10) > 0)
	{
	print_number(p / 10);
	}
	_putchar((p % 10) + '0');
}
