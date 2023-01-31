#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: this is a pointer to the head of the list
 * Return: temp
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current->next)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
