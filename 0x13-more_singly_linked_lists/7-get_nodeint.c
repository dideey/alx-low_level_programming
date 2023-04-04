#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets nth node
 * @head:head pointer
 * @index:the node number
 * Return:nth node or NULL if fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i;
i = 0;

tmp = head;
while (tmp != NULL)
{
if (i == index)
{
	return (tmp);
}
i++;
tmp = tmp->next;
}
return (NULL);
}
