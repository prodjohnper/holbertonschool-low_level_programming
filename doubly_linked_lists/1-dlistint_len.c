#include "lists.h"

/**
 * dlistint_len - Function that returns
 * the number of elements in a list.
 *
 * @h: parameter.
 *
 * Return: the elements of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
