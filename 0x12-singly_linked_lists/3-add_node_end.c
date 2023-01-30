#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while(current->next != NULL)
		current = current->next;
	current->next = new;
	new->len = strlen(str);
	return (new);
}

