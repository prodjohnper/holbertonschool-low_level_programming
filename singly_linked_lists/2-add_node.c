#include "lists.h"

/**
 * add_node - Function that add a new
 * node at the beginning of a list.
 *
 * @head: pointer to nodes.
 * @str: string.
 *
 * Return: address of the new element, NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
