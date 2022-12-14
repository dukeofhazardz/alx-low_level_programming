#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all
 *		the data (n) of a listint_t linked list.
 * @head: A pointer to the list
 * Return: Sum of list
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
