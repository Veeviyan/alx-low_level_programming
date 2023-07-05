#include "lists.h"

/**
 * get_nodeint_at_index - checks the nth node of a linked list
 * @head: head node
 * @index: position of the node
 * Return: nth node or NULL if the node dos not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head != NULL)
	{
		while (head)
		{
			if (counter == index)
				return (head);

			head = head->next;
			counter++;
		}
	}

	return (NULL);
}
