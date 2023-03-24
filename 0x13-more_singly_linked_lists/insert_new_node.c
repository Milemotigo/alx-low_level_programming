#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that insert
 * a node at a given position
 * @head: head is a pointer to head 
 * @n: data in our node
 * Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	temp = *head;

	/*check if my head node is null*/
	if (head == NULL)
		return (NULL);
	/*allocate a memory for our new node*/
	new_node = malloc(sizeof(*new_node));
	/*check if the newly allocated node fail*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/*iterate through the node to find the position to insert new node*/
	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;
	/*check if idx is zero */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
