#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a position in a list
 * @head: first element in the list
 * @index: position to delete the element
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int len = 0;

	if (!head)
		return (-1);

	while (current)
	{
		if (len == index)
		{
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			else
			{
				*head = current->next;
			}

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}

		current = current->next;
		len = len + 1;
	}

	return (-1);
}

