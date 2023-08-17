#include "lists.h"
/**
 *add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 *@head: head pointer
 *@n: where to be added
 *Return: address of new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
