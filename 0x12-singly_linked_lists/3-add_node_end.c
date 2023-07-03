#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to the end of a list
 * @head: head of the list
 * @str: string to be added
 * Return: null or address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	size_t n = 0;
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[n] != '\0')
		n++;

	new_node->str = dup_str;
	new_node->len = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}

	return (*head);
}
