#include "lists.h"

/**
 * pop_listint -function delete head node.
 * @head: pointer to a pointer
 * Return: the head nodes data (n) if linked list empty return 0
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
