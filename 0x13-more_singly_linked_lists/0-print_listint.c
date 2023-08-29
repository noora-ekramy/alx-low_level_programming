#include "lists.h"
/**
 * print_listint - a function that prints
 *  all the elements of a list
 * @h: list head
 * Return: the list size
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
