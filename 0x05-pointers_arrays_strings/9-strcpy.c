#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: the variable to be copied to
 * @src: the variable that will be copied
 *
 * Return: the parameter dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int t;

	while (src[i] != '\0')
	{
		i++;
	}

	t = 0;
	while (t < i && src[t] != '\0')
	{
		dest[t] = src[t];
		t++;
	}

	t = t;
	while (t <= i)
	{
		dest[t] = '\0';
		t++;
	}
	return (dest);
}
