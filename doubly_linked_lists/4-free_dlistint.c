#include "lists.h"

/**
 * free_dlistint - Function that frees a list.
 *
 * @head: beginning of node.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
