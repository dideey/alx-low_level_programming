#include "main.h"
/**
 * get_endianness - check wether its big or little endianne
 * Return: 1 if lilendianne or 0 if big endianne
 *
 */

int get_endianness(void)
{
unsigned int i;
char *p = (char *)&i;

if (*p)
{
	return (1);
}
else
{
	return (0);
}

}
