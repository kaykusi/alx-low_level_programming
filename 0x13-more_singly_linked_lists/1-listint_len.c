#include "lists.h"

/**
 * listint_len - return number of nodes.
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/

size_t listint_len(const listint_t *h)
{
	/*temp is a listint_t type. It is a structure*/
	const listint_t *cont = h;
	size_t numNodes = 0;

	while (cont != NULL)
	{
		cont = cont->next;
		numNodes++;
	}

	return (numNodes);
}
