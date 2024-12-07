#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy_str;

	if (str == NULL)
	{
		return (NULL);
	}

	char *copy_str = strdup(const char *str);

