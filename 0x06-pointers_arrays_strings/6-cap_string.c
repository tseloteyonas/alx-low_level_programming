#include "main.h"
/**
 * cap_string - capitalizing all words of a string
 * @str: the string to be capitalized
 *
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int a;
	int b;

	char lett[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	a = 0;

	while (str[a] != '\0')
	{
		if (a == 0 && str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		b = 0;

		while (lett[b] != '\0')
		{
			if (lett[b] == str[a] && (str[a + 1] >= 97 && str[a + 1] <= 122))
			{
				str[a + 1] = str[a + 1] - 32;
			}
			b++;
		}
		a++;
	}
	return (str);
}
