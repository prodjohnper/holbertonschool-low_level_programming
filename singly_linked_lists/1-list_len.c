#include "lists.h"

/**
 * list_len - Function that returns
 * the number of elements in a linked list.
 *
 * @h: parameter.
 *
 * Return: the elements of the list.
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
