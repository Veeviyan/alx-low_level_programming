#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked lsit
 * @head: first node in the list
 * @n: elements in the list
 * Return: address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (current != NULL)
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
