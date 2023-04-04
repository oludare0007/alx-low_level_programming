#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t 
 *
 * Return: total nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;
 while (g)
 {
 printf("%d\n", g->n);
 num++;
 g = g->next;
 }
 return (num);
}
