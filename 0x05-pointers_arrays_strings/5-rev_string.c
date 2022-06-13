#include "main.h"
/**
 * rev_string - reversing a string
 * @s: the character
 *
 */
void rev_string(char *s)
{
	char a;
	int i, x, y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0 ; i < x / 2 ; i++)
	{
		a = s[i];
		s[i] = s[y];
		s[y--] = a;
	}
}
