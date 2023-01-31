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
    listint_t *current;
    int sum;

    current = head;
    sum = 0;
    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    return (sum);
}

