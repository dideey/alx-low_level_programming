#include "lists.h"
/**
* add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
* @head: head node
* @n: number of new value for new node
* Return: address of new node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *var, *new;
var = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->next = NULL;
new->prev = NULL;
new->n = n;
if ((*head) == NULL)
{
*head = new;
return (new);
}
while (var->next)
{
tmp = var->next;
}
new->prev = var;
var->next = new;
return (new);
}
