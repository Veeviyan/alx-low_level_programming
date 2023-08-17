#include "lists.h"

/**
 * sum_dlistint - prints the sum of all elements of a list
 * @head: first element of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum = sum + current->n;

		current = current->next;
	}

	return (sum);
}
