#include "lists.h"
/**
 *free_dlistint- function that frees last node
 *
 *@head: head node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->prev->next = NULL;
	free(temp);
}
