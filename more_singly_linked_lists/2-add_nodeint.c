#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at
 *				 the beginning of a listint_t list.
 * @head: Beginning of linked list.
 * @n: Add to list integer.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
