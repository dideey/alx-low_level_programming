#include "main.h"
/**
 * factorial - gives the factorial of integers
 * @n:input
 * Return: -1if not successful
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
