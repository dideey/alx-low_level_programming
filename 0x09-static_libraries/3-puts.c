#include "main.h"
/**
 * _puts - outputs a string
 * @str: inputed string
 * Return: void .
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
return;

}
