#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: first node of the list
 * Return: vnothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
