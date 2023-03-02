#include "main.h"
/**
 * leet - encrypts
 * @d: input string
 * Return: d
 */

char *leet(char *d)
{
int a, b;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (a = 0; d[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (d[a] == s1[b])
{
d[a] = s2[b];
}
}
}
return (d);
}
