#include "lists.h"

/**
 * add_node - Function that adds a new node
 *			  at the beginning of a list_t list.
 * @head: Beginning of linked list.
 * @str: String to be duplicated.
 * Return: The address of the new element,
 *		   or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
