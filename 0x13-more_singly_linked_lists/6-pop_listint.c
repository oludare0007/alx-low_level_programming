#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: element in deleted data
 * or 0 when  list is empty
 */
int pop_listint(listint_t **head)
{
	int gat;
	listint_t *x;
	listint_t *w;

	if (*head == NULL)
		return (0);
	w = *head;
	gat = w->n;

	x = w->next;

	free(w);

	*head = x;

	return (gat);

}

