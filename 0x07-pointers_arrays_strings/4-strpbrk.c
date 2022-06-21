#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of first bytes in the string accept
 * @s: the string
 * @accept: the second string
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
