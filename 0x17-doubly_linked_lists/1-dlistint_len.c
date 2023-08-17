#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count = count + 1;
		current = current->next;
	}

	return (count);
}
