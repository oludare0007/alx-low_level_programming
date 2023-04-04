#include "lists.h"
/**
 * * free_listint - linked list freed
 * @head: listint_t list freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp

	while(head)

	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
