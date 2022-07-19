#include "lists.h"
/**
 * pop_listint - this function deletes the head node of a list
 * @head: the pointer to the struct
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *f;
	int d;

	if (*head == NULL)
	{
		return (0);
	}

	d = (*head)->n;
	f = (*head)->next;
	free(*head);
	*head = f;
	return (d);
}
