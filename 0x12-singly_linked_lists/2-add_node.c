#include "lists.h"
/**
 * add_node -add node to list.
 * @head: pointer to a pointer
 * @str: string value in the structure
 * Return: the address of the new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int c;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (c = 0; str[c] != '\0'; c++)
		;
	newNode->str = strdup(str);
	newNode->len = c;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
