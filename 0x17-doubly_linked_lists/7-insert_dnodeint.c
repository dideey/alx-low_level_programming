#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts a node
 *				into a liked list at specified index
 *@h: pointer to the first node in a linked list
 *@idx: index of the list where the new node is to be inerted
 *@n: value of the new node to be inserted to the linked list
 *Return: Return a pointer t oa linked list on success and NULL on error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
