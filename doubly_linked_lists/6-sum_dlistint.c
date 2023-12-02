#include "lists.h"

/**
 * sum_dlistint - Function that returns
 * the sum of all data (n) of a linked list.
 *
 * @head: pointer to nodes.
 *
 * Return: the sum of the data, 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
