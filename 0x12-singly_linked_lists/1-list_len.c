#include "lists.h"
/**
 * list_len - returns number of list elements
 * @h: list head
 * Return:number of list elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

