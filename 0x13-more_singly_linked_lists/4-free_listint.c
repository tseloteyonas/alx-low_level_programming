#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the pointer that points to the struct
 *
 * Return: always 0
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head != NULL)
	{
		f = head;
		head = f->next;
		free(f);
	}
}
