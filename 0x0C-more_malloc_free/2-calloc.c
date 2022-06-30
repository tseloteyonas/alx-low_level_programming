#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x, y;

	y = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(y);

	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < y ; x++)
	{
		p[x] = 0;
	}
	return (p);
}
