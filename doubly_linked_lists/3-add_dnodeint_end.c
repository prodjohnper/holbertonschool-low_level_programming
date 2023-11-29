#include "lists.h"

/**
 * add_dnodeint_end - Function that
 * adds a new node at the end of a list.
 *
 * @head: pointer to nodes.
 * @n: parameter.
 *
 * Return: address of the new element, NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new_node;
	new_node->prev = tail;

	return (new_node);
}
