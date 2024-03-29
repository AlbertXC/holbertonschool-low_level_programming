#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node
 *					 at the end of a listint_t list.
 * @head: Beginning of linked list.
 * @n: Add to list integer.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;

	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
