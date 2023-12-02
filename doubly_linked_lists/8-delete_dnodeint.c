#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that
 * deletes the node at index of a list.
 *
 * @head: pointer to nodes.
 * @index: idex of node to be deleted.
 *
 * Return: 1 if success or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = *head;
	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev == NULL)
			{
				*head = current->next;
				if (current->next != NULL)
					current->next->prev = NULL;
			}
			else if (current->next == NULL)
			{
				current->prev->next = NULL;
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
