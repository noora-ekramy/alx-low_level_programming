#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to set in the new node.
 *
 * Return: Address of the new element
 */
void add_nodeint(listint_t **head, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node)
{
new_node->n = n;
new_node->next = *head;
*head = new_node;
}
}
