#include "main.h"
/**
 * print_square - a square is printed
 * @size: size of square
 *
 *
 * Return: a square
 */
void print_square(int size)
{
	int a1, a2;

	if (size > 0)
	{
		for (a1 = 0 ; a1 < size ; a1++)
		{
			for (a2 = 0 ; a2 < size ; a2++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
