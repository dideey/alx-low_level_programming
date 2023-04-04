#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - linked list
 * @head:pointer to head pointer
 * Return:void
 *
 */
void free_listint2(listint_t **head)
{
listint_t *fr;
if (head == NULL)
{
	return;
}

while (*head)
{
fr = (*head)->next;

free(*head);
*head = fr;
}
head = NULL;
}
