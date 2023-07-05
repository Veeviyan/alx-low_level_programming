#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: first node of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	head = NULL;
}
