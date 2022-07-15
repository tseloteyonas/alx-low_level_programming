#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *final = *head;
	int elem = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = new;
	}

	while (str[elem])
	{
		elem++;
	}
	new->len = elem;
	return (new);
}
