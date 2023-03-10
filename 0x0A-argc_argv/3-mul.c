#include <stdio.h>
#include "main.h"
/**
 * main - multiply
 * @argc:count
 * @argv:string
 * Return: 0 success 1 fail
 *
 *
 */

int main(int argc, char *argv[])
{
int mul;

if (argc > 3 || argc < 3)
{
printf("Error\n");
return (1);
}

mul = *argv[1] * *argv[2];
printf("%d\n", mul);
return (0);
}
