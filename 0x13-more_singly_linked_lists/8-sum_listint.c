#include "lists.h"

/**
 * sum_listint - return sum.
 * Description: Function that return the sum of  all data of the list
 * @head: pointer to a structure typedef list_t
 * Return:sum of all data of the list
 **/

int sum_listint(listint_t *head)
{
	const listint_t *temp = head;
	size_t sum;

	if (temp == NULL)
		return (0);

	for (sum = 0; temp != NULL;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
