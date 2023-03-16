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
unsigned int a, b, c, d, x;
a = 0;
b = 0;
x = strlen(s2);
if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
while (s1[a] != '\0')
{
a++;
}
if (n > x)
{
n = x;
}
while (s2[b] != '\0' && b < n)
{
b++;
}
ncat = malloc((a + n) *sizeof(char) + 1);
if (ncat == NULL)
{
return (NULL);
}
for (c = 0; c < a; c++)
{
ncat[c] = s1[c];
}
for (d = 0; d < n; d++)
{
ncat[c + d] = s2[d];
}
ncat[a + n + 1] = '\0';
return (ncat);
free(ncat);


}
