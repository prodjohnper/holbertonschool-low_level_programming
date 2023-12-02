#include "lists.h"

/**
 * ger_dnodeint_at_index - Function that 
 * returns the nth node of a list.
 *
 * @head: pointer to nodes.
 * @index: parameter.
 *
 * Return: NULL if node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
