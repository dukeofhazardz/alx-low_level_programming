#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of
 *		all the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the list
 * Return: Sum of all node data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
