#include "lists.h"

/**
 * print_dlistint -  prints all elements in a list
 * @h: pointer to the list
 * Return: all the elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
