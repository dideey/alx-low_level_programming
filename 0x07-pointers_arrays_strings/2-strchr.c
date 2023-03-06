#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for a string
 * @s:string being analysed
 * @c: the character being searched
 * Return:c if the character is found else NULL
 *
 */

char *_strchr(char *s, char c)
{

int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}

}
return (NULL);
}



