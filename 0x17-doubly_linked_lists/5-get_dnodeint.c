#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns
 *	the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list
 * @index: is the index of the node, starting from 0
 * Return: Node at index, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
