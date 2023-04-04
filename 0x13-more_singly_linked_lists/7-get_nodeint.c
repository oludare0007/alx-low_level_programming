#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in linked list
 * @index: index of the node to return
 *
 * Return: pointer to node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index && head != NULL; k++)
	{
		head = head->next;
	}

	return (head);
}
