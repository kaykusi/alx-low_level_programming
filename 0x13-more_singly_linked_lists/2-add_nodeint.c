#include "lists.h"

/**
 * add_nodeint -add node to list.
 * @head: pointer to a pointer
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
