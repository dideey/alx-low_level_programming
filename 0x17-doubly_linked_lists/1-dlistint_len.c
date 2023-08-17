#include "lists.h"
/**
 *dlistint_len - returns no of elements
 *@h: head node
 *Return: lenght
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int n = 0;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (n);
}
