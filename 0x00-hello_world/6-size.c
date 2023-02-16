/**
 * main - Enrty point
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of longint: %zu byte(s)\n", sizeof(longintType));
printf("Size of longlongint: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

