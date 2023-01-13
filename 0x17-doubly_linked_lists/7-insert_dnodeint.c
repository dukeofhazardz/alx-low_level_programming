#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts
 *		a new node at a given position.
 * @h: A pointer to the head of the list
 * @idx:  is the index of the list where the new node
 *	should be added. Index starts at 0
 * @n: Data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	temp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
		i++;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->n = n;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;
	return (temp);
}
