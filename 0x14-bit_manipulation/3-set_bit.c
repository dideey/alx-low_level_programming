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

n[index] = 1 << (index - 1);
return (1);
}
