#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search for occurence of characters
 * @s: first string
 * @accept: second string
 * Return: s else null
 *
 */

char *_strpbrk(char *s, char *accept)
{

char *temp;
while (*s != '\0')
{
temp = accept;
while (*temp != '\0')
{
if (*s == *temp)
{
return (s);
}
temp++;
}
s++;
}

return (NULL);


}
