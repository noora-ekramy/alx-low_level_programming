#include "lists.h"
/**
 * listint_len - return num of list elements
 * @h: list head
 * Return: the list size
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
