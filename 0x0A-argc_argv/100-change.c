#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A proogram that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The arguements' counter
 * @argv: The argument's values
 * Return: 1 if the number of arguments passed is not exactly
 * or 0 in otherwise
 */

int main(int argc, char *argv[])
{
int num, j, change = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
num -= coins[j];
change++;
}
}
printf("%d\n", change);
return (0);
}
