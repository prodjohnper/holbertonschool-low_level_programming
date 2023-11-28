#include "lists.h"

/**
 * free_list - Function that frees a list.
 *
 * @head: beginning of node.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
