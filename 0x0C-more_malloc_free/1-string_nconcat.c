#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - links two strings
 * @s1:first string
 * @s2:second string
 * @n:up to this number byte
 * Return:pointer to s1
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ncat;
unsigned int a, b, c, i, j;
a = 0;
b = 0;

if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";

for (i = 0; s1[i]; i++)
	a++;
for (j = 0; s2[j] && j < n; j++)
	b++;
c = b + a;
ncat = malloc(c *sizeof(char) + 1);
for (i = 0; i < c; i++)
{
ncat[i] = s1[i];
}
for (j = 0; j < b; j++)
{
ncat[a + j] = s2[j];
}

ncat[a + j + 1] = '\0';

}
return (ncat);
}
