#include "main.h"
/**
 * set_bit - changes bit to 1
 * @n:the input binary number
 * @index:the position on the bit
 * Return: 1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 8 * (sizeof(unsigned long int)))
{
return (-1);
}

*n = (1 << index) | *n;


return (1);
}
