#include "lists.h"
/**
 * add_nodeint_end - adding a node at the end
 * @head: the pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	end = *head;
	if (end != NULL)
		while (end->next != NULL)
			end = end->next;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
	}
	else
	{
		end->next = ptr;
		ptr->next = NULL;
	}
	return (ptr);
}
