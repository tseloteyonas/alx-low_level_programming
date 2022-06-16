#include "main.h"
/**
 * _strncpy - copies n characters from one
 * string to another
 * @dest: input parameter string
 * @src: input parameter string
 * @n: the number of characters
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (ret);
}
