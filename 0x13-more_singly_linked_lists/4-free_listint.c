#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees lists
 * @head:pointer
 * Return:null
 */
void free_listint(listint_t *head)
{
listint_t *re;

while (head)
{
re = head->next;
free(head);
head = re;

}

return;

}
