#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the linked list
 * Return: the sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

