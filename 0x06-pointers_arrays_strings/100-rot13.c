#include "main.h"
/**
 * rot13 - encodes string
 * @a:string being passed
 * Return: a
 */
char *rot13(char *a)
{
int i, j;
char arr[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char arrot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (a[i] == arr[j])
{
a[i] = arrot[j];

break;
}

}

}

return (a);

}
