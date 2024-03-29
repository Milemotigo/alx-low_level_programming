#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the linked list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new, *current;
    unsigned int i;

    current = *head;
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL && i < idx - 1)
        return (NULL);

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    if (idx == 0)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        new->next = current->next;
        current->next = new;
    }

    return (new);
}
