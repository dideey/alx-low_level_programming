#include "main.h"
#include <stdlib.h>

/**
 * get_bit - get value of the bit 0 0r 1.
 * @n:the input int
 * @index:bit number
 * Return:the value of the bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 8 * (sizeof(unsigned int)))
{
	return (-1);
}
if ((n & (1 << index)) == 0)
{
	return (0);
}
else
{
	return (1);
}

}
