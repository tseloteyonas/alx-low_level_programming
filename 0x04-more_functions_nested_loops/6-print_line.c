#include "main.h"
/**
 * print_line - draws a straight line
 * @n: the number of times the character is printed
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int t = 1;

	while(t <= n)
	{
		_putchar(95);
		t++;
	}
	_putchar('\n');
}
