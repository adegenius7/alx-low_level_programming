#include "lists.h"
/**
 *dlistint_len- prints the number of elements of a list
 *
 *@h: the pointer to the head of a list
 *
 *Return: number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
