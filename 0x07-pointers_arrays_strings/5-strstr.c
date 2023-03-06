#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds substring
 * @haystack:a string
 * @needle:sub string
 * Return: pointer otherwise null
 */

char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = needle;

while (*i == *j && *j != '\0')
{
i++;
j++;

}

if (*i == '\0')
	return (haystack);

}

return (NULL);


}
