#include "lists.h"

/**
 * print_listint -print elements of the list.
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *cont = h;
	size_t numNodes;

	for (numNodes = 0; cont != NULL; numNodes++)
	{
		printf("%d\n", cont->n);
		cont = cont->next;
	}
	return (numNodes);
}
