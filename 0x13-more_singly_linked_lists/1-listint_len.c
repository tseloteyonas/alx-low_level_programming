#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: the struct node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
