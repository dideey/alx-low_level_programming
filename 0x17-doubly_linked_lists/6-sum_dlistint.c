#include "lists.h"
/**
* sum_dlistint - sums up values of linked list
* @head: head of address to sum
* Return: sum value
*/
int sum_dlistint(dlistint_t *head)
{
const dlistint_t *tmp;
int sum = 0;
tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
