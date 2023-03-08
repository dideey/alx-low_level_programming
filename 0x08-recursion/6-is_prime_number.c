#include "main.h"
/**
 * is_prime_number - checks prime number
 * @n:number
 * Return:0 or 1
 */
int prime_checker(int n, int m);
int is_prime_number(int n)
{

if (prime_checker(n, 2))
{
return (1);
}
else
{
return (0);
}

}

/**
 * prime_checker - checks
 * @n:number
 * @m: number
 * Return: 0 or 1
 */

int prime_checker(int n, int m)
{
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % m == 0 && n == m)
{
return (1);
}
return prime_checker(n, m + 1);
}
