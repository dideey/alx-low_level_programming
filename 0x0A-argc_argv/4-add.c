#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds
 * @argc:count
 * @argv:string
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int sum = 0, nu, z, x, y;

for (z = 1; z < argc; z++)
{
for (x = 0; argv[z][x] != '\0'; x++)
{
if (argv[z][x] > '9' || argv[z][x] < '0')
{
printf("Error\n");
return (1);
}

}
}
for (y = 1; y < argc; y++)
{
nu = atoi(argv[y]);
sum += nu;
}
printf("%d\n", sum);
return (0);
}
