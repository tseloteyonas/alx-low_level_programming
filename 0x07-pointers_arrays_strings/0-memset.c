#include "main.h"
/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
