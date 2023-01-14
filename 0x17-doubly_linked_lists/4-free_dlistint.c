#include "lists.h"
/**
 *free_dlistint- function that frees last node
 *
 *@head: head node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}

}
