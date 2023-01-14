#include "lists.h"
/**
 *free_dlistint- function that frees last node
 *
 *@head: head node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *temp2;

	temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp2 = temp->prev;
	temp2->next = NULL;

	free(temp);
}
