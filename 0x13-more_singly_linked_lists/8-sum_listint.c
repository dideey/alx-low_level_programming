#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - adds int in a list
 * @head:pointer to head
 * Return:sum
 */
int sum_listint(listint_t *head)
{
listint_t *temp;
int sum;
sum = 0;
temp = head;

if (head == NULL)
{
	return (0);
}
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);

}
