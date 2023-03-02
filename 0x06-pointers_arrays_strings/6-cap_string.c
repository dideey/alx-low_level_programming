#include "main.h"
/**
 * cap_string - capitalizes strings
 * @s: the string
 * Return: character
 */

char *cap_string(char *s)
{
int nonc[14] = {' ', '\t', '\n', ',', ';',
	'.', '!', '?', '"', '(', ')', '{', '}'};

int i, j;

for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
for (j = 0; j < 14; j++)
if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == nonc[j])
s[i] = s[i] - 32;
}
return (s);
}

