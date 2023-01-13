#include "lists.h"
/**
 * add_dnodeint- Adds a new node to the begining of a list
 *
 * @n: data part
 *@head: head of the list
 * Return: the new node address
 *
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	temp = *head;


	new->next = temp;

	if (temp != NULL)
		temp->prev = new;

	*head = new;

	return (new);
}
