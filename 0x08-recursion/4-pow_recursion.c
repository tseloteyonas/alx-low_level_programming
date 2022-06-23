#include "main.h"
/**
 * _pow_recursion - gives x raised to y
 * @x: the number
 * @y: the power
 *
 * Return: the raised number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
