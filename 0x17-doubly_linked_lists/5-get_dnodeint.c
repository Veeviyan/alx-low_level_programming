#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at an nth position
 * @head: first element of the list
 * @index: position of the node
 * Return: nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int iterator = 0;

	if (head)
	{
		while (node != NULL)
		{
			if (iterator == index)
				return (node);

			node = node->next;
			iterator++;
		}
	}


	return (NULL);
}
