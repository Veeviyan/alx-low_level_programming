#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
