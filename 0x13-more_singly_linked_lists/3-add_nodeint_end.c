#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that add a node to the end of listint_t
 *
 * @head: this is a double pointer to the head of the linked list
 *
 * @n: The value that was assigned to the new node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	current = *head;
	if (new == NULL)
		return (NULL);
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = NULL;
	while (current->next)
		current = current->next;
	current->next = new;
	return (*head);
}
