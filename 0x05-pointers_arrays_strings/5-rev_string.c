#include "main.h"
#include <string.h>
/**
 * rev_string - it reverses a sting.
 * @s: the string input
 * Return: void
 * srlen -gets lenght
 */

void rev_string(char *s)
{
char rv = s[0];
int d = 0;
int e;

while (s[d] != '\0')
d++;
for (e = 0; e < d; e++)
{
d--;
rv = s[e];
s[e] = s[d];
s[d] = rv;


}



}

