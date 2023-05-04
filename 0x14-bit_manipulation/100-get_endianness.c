#include "main.h"
/**
 * get_endianness - check wether its big or little endianne
 * Return: 1 if lilendianne or 0 if big endianne
 *
 */

int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

if (*endian == 1)
{
	return (1);
}
	return (0);
}

