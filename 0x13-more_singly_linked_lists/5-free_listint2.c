#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: first node of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	head = NULL;
}
