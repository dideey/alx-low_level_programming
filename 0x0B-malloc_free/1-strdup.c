#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - duplicates string.
 * @str:passed string
 * Return: str or null
 *
 */

char *_strdup(char *str)
{

char *cop;
unsigned int i, j;
j = 0;

if (str == NULL)
{
return (NULL);
}

while (str[j] != '\0')
{
j++;
}

cop = malloc(j *sizeof(char) + 1);

for (i = 0; i < j; i++)
{
cop[i] = str[i];
}
return (cop);
free(cop);


}
