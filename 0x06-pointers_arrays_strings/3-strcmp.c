#include "main.h"
/**
 * _strcmp - compares if 2 strings are equal
 * @s1: first string
 * @s2: second string
 *
 * Return: result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
