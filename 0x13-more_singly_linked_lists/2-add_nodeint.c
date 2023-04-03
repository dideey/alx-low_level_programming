#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beggining of list
 * @head:pointer to the head of listint_t
 * @n:new values
 * Return:address
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *update;
int k;
k = n;

update = malloc(sizeof(listint_t));

if (update == NULL)
{
	free(update);
	return (NULL);
}
update->n = k;
update->next = *head;

*head = update;

return (update);
free(update);
}
