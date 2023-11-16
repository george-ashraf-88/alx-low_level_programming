#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 * of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	char *dup_str;
	int len;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(x);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	x->str = dup_str;
	x->len = len;
	x->next = *head;

	*head = x;

	return (x);
}
