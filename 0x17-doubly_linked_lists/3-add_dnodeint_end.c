#include "lists.h"
/**
 *add_dnodeint_end- adds a new node to the end
 *@head: head node
 *@n: data
 *Return: new niode
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end;
	dlistint_t *ptr;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;

	ptr = *head;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_end;
	}
	else
	{
		*head = new_end;
	}

	new_end->prev = ptr;

	return (new_end);

}
