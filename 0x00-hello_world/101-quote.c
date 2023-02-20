/**
  * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i = 0;

for (i = 0; st[i] != '\n'; i++)
{
putchar(st[i]);
}
putchar('\n');
return (1);
}
