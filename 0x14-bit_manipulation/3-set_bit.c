#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: the number
 * @index: the index
 *
 * Return: 1 if worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}
