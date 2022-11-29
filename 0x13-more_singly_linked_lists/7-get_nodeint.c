#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 *			node of a listint_t linked list.
 * @head: A pointer to the list
 * @index: The nth node of a listint_t linked list.
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;

	while (i != index && tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (i != index)
		return (NULL);
	
	return (tmp);
}
