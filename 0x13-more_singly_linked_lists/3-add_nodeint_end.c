#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add ints at the last node
 * @head:the pointer to the head of the list
 * @n:new ints
 * Return:update adress
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *tail;

tail = *head;


tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
{
	return (NULL);
}
tmp->n = n;
tmp->next = NULL;

if (*head == NULL)
{
     *head = tmp;
}
else
{

while (tail->next != NULL)
{
	tail = tail->next;
}
tail->next = tmp;

}
return (tmp);
}

