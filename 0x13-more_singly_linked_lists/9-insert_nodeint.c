#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adds a node at whatever point
 * @head:head pointer
 * @idx:where the node is to be added
 * @n:values of new node
 * Return:address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i, j;
listint_t *tra, *new;
new = malloc(sizeof(listint_t));

new->n = n;
new->next = NULL;

i = idx - 1;
j = 0;

if (new == NULL)
{
	return (NULL);
}
tra = *head;
if (idx != 0)
{
while (j != i)
{
tra = tra->next;
j++;
}
new->next = tra->next;
tra->next = new;
}
return (new);

}
