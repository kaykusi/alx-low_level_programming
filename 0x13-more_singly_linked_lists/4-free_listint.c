#include "lists.h"

/**
 * free_listint -free list.
 * @head: pointer to a pointer
 * Return: void.
 **/

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);

		free(head);
	}
}
