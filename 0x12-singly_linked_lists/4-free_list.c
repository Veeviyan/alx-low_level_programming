#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to the first node pf the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
