#include "lists.h"
/**
 *print_dlistint: a function that prints the data and number of a node
 *
 *@h- head of the list
 *
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	count = 0;

	if (h == NULL)
	{
		return count;
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return count;
}
