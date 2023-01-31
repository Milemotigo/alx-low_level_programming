#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new->next;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
		new->n = n;
		current->next = new;
		return(*head);
}
