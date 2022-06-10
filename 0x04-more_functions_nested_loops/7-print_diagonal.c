#include "main.h"
/**
 * print_diagonal - diagonal line is drawn
 * @n: the number of times the character is printed
 *
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int a1, a2;

	if (n > 0)
	{
		for (a1 = 0 ; a1 < n ; a1++)
		{
			for (a2 = 0 ; a2 < a1 ; a2++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

