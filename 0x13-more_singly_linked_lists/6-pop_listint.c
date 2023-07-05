#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: first node of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *new_head;

	if (*head == NULL)
	{
		return (0);
	}

	else
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
