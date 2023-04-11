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

int diff, sum, x;
diff = n ^ m;

x = diff & (diff - 1);
sum = 1;
while (x != 0)
{
sum++;
x = x & (x - 1);

}
return (sum);

}
