#include "lists.h"
/**
 * free_list -add node to list.
 * @head: pointer to a pointer
 * Return: void.
 **/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);

		free(head->str);
		free(head);
	}
}
