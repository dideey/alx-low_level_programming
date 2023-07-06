#include "main.h"
/**
 * flip_bits - counts the bits needed to change n to m or viseverser
 * @n:first int
 * @m:second int
 * Return: the total
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;

while (xor > 0)
{
	bits += (xor & 1);
	xor >>= 1;
}

		return (bits);
}
