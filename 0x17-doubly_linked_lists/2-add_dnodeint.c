#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node
 *		at the beginning of a dlistint_t list.
 * @head: A pointer to the linked list
 * @n: Data to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (*head);
}
