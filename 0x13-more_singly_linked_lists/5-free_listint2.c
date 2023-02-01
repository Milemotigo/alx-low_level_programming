#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to pointer to head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	if (*head != NULL)
	{
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		*head = NULL;
	}
	}
}
