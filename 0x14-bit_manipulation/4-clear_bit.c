#include "main.h"
/**
 * clear_bit - sets bit to 0
 * @n: the string
 * @index: the index
 *
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
