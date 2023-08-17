#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - print all them elements
* @h: head pointer
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *var;
int count = 0;
var = h;
while (var != NULL)
{
printf("%d\n", var->n);
var = var->next;
count++;
}
return (count);
}
