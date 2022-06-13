#include "main.h"
/**
 * puts_half - prints second half string
 * @str: the string;
 *
 */
void puts_half(char *str)
{
	int t, i = 0;

	while (*(str + i))
		i++;
	t = i / 2;
	if (i % 2)
		t += 1;
	while (t < i)
	{
		_putchar(*(str + t));
		t++;
	}
	_putchar('\n');
}
