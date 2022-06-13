#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted
 * Return: the converted string.
 */
int _atoi(char *s)
{
	short b;
	int i, min, res;

	i = min = res = b = 0;
	min = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			min *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
		i++;
	}
	res *= min;
	return (res);
}
