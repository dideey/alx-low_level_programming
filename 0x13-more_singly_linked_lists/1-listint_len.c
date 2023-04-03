#include "lists.h"
/**
 * listint_len - lenght of lists
 * @h:Node head
 * Return:lenght
 *
 */
size_t listint_len(const listint_t *h)
{
int num = 0;

while (h != NULL)
{
	num++;
	h = h->next;
}

return (num);
}
