#include "lists.h"

/**
  * list_len - prints the length ofa list
  * @h: singly linked lists
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}

	return (nodes);
}
