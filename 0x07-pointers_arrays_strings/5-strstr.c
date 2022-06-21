#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the first string
 * @needle: the substring
 *
 * Return: the string haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
	if (needle[j] == '\0')
	{
		return (&haystack[i]);
	}
	i++;
	}
	return ('\0');
}
