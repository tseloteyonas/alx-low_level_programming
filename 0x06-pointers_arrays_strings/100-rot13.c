#include "main.h"
/**
 * rot13 - replacing a character with the 13th character
 * that comes after it
 * @str: the string to be converted
 *
 * Return: the encoded character
 */
char *rot13(char *str)
{
	int i, j;

	char word[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (word[j] != '\0')
		{
			if (str[i] == word[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
