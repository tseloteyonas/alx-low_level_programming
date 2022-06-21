#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;

		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
