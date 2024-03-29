#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: pointer to pointer the head node
 * @n: number of intergers in the node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (new_node->next != NULL)
	{
		(new_node->next)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
