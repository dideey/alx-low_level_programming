#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all the integers in the list
 * @h: the head
 * Return:number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
int nodes = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	nodes++;
}
return (nodes);

}
