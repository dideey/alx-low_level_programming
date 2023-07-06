#include "main.h"
/**
 * clear_bit - unsets a bit
 * @n:the binary number
 * @index:the position of bit
 * Return: 1 or -1
 *
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 8 * (sizeof(unsigned long int)))
{
	return (-1);
}

*n = *n & ~(1 << index);
return (1);
}
