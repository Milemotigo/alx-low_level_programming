#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of a linked list
 * @idx: index of the list where the new node should be added
 * @n: integer data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node, *current;

    if (!head)
        return (NULL);

    current = *head;
   /* for (i = 0; current && i < idx - 1; i++)*/
        /*current = current->next;*/

  /*  if (!current && idx != 0)*/
      /*  return (NULL);*/

    new_node = malloc(sizeof(*new_node));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    for (i = 0; current && i < idx - 1; i++)              current = current->next;
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        new_node->next = current->next;
        current->next = new_node;
    }

    return (new_node);
}

