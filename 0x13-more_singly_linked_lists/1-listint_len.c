#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;
/* while loop area */
	while (h)
	{
	number++;
	h = h->next;
	}
	return (number);
}
