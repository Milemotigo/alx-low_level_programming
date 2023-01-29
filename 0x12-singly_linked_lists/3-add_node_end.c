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
	list_t *new_node = NULL;
	list_t *temp = *head;
	
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return NULL;
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return NULL;
	}
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
		return new_node;
	}
	while (temp->next)
		temp = temp->next;
	new_node->len = strlen(str);
	temp->next = new_node;
	return new_node;
}
