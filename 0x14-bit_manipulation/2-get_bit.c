#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: the number
 * @index: the index
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
