#include "lists.h"
/**
 * add_node_end - and node end
 * @head: list heas
 * @str : content string
 * Return: list elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
		current = current->next;

	new_node->len = strlen(str);
	new_node->next = NULL;
	current->next = new_node;
	return (new_node);
}
