#include "main.h"
/**
 * print_triangle - a triangle is printed
 * @size: the size of triangle
 *
 * Return: a triangle
 */
void print_triangle(int size)
{
	int a1, a2;

	if (size > 0)
	{
		for (a1 = 0 ; a1 < size ; a1++)
		{
			for (a2 = 0 ; a2 < size ; a2++)
			{
				if (a2 < size - (a1 + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
