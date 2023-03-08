#include "main.h"

int _root(int n, int l);
/**
 *  _sqrt_recursion - rights square root
 *  @n:input integer
 *  @l:number
 *  Return:int
 */
int _sqrt_recursion(int n)
{
return (_root(n, 1));

}
/**
 * _root - recursive root
 * @n:number
 * @l:number
 * Return: int
 */

int _root(int n, int l)
{
int square = l * l;

if (square > n)
{
return (-1);
}
if (square == n)
{
return (l);
}
return (_root(n, l + 1));

}
