#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a position
 * @head: head node
 * @idx: index of the node
 * @n: data of the list
 * Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current_node;
		current_node = new_node;
		return (new_node);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (current_node == NULL || current_node->next == NULL)
			return (NULL);

		current_node = current_node->next;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
