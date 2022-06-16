#include "main.h"
/**
 * leet - encoding a string into 1337
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char d[] = "aAeEoOtTlL";
	char dd[] = "4433007711";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (d[j] != '\0')
		{
			if (str[i] == d[j])
			{
				str[i] = dd[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
