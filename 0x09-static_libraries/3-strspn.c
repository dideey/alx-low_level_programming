#include "main.h"
/**
 * _strspn - searchs for charachers in strings
 * @s: string one.
 * @accept: string two
 * Return: s
 *
 */

unsigned int _strspn(char *s, char *accept)
{

int i, j, k, l, m;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)

for (k = 0; k < i; k++)
{
for (l = 0; l < j; l++)
{
if (s[i] == s[j])

m++;
}
}
return (m);
}
