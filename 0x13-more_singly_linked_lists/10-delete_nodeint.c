#include "lists.h"

/**
 * delete_nodeint_at_index - deletes rhe node at a given position
 * @head: head node
 * @index: position of the node to delete
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *new_node;
	unsigned int count;

	if (current_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (current_node == NULL)
			return (-1);

		current_node = current_node->next;
	}

	new_node = current_node->next;
	current_node->next = new_node->next;
	free(new_node);
	return (1);
}
