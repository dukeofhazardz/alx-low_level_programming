#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 *			at the end of a listint_t list.
 * @head: The pointer to the list
 * @n: The integer to be passed
 * Return: The new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		return (last);
	}
}
