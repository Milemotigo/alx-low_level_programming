#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that return the number of elements in a linked list_t
 * @h: pointer to the linked list_t
 * Return: len number of list_t
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("[%d]\n", h->len);
		}
		count++;
		h = h->next;
	}
	return (count);
}
