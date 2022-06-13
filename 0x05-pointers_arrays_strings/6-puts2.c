#include "main.h"
/**
 * puts2 - printing characters of a string
 * @str: the string
 *
 */
void puts2(char *str)
{
	int i;
	int t;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	for (t = 0 ; t < i ; t = t + 2)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
