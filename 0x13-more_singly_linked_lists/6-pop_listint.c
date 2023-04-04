#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - removes first node but returns its values
 * @head:pointer to head pointer
 * Return:0 if fails or values(n)
 *
 *
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
tmp = *head;

if (tmp == NULL)
{
	return (0);
}

return ((*head)->n);
free(head);
}
