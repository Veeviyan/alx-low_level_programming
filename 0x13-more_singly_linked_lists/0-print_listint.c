#include "lists.h"

/**
 * print_listint - prints all the elements in a listint
 * @h: the first element in the list
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
