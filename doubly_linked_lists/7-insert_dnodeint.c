#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that
 * inserts a new node at a given position.
 *
 * @h: pointer to nodes.
 * @idx: index of new node.
 * @n: value of new node.
 *
 * Return: the address of list where
 * new node should be added, NULL otherwise.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *newNode, *current;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			newNode->next = *h;
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}
	current = *h;
	while (current != NULL)
	{
		if (count == idx)
		{
			newNode->next = current;
			newNode->prev = current->prev;
			current->prev->next = newNode;
			current->prev = newNode;
			return (newNode);
		}
		current = current->next;
		count++;
	}
	newNode = NULL;
	if (count == idx)
		newNode = add_dnodeint_end(h, n);
	return (newNode);
}
