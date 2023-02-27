#include "main.h"
/**
 * swap_int - it takes two variables holding integers and swaps their value
 * @a: var 1
 * @b: var 2
 * Return: null
 *
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;

}
