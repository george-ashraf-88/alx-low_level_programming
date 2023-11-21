#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return NULL; // Return NULL if malloc fails
	}

	new_node->n = n;
	new_node->next = *head; // Point the new node to the current head

	*head = new_node; // Update the head to point to the new node

	return new_node; // Return the address of the new element
}
