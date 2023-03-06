#include "main.h"
#include <stddef.h>
/**
 * _strch - searches for a string
 * @s:string being analysed
 * @c: the character being searched
 * Return:c if the character is found else NULL
 *
 */

char *_strchr(char *s, char c)
{

int i;
char m = c;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == m)
{
return (s);
}

}
return (NULL);
}



