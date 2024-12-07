#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the address of the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy_str;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	copy_str = strdup(str);

	if (copy_str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(copy_str);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	new_node->str = copy_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
