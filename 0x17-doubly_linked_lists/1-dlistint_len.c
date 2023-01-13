#include "lists.h"

/**
 * dlistint_len - A function that returns the number
 *		of elements in a linked dlistint_t list.
 *
 * @h: A pointer to the head of the the list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
