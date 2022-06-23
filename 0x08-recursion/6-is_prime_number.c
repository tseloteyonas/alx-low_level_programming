#include "main.h"
/**
 * prime_found - found prime number
 * @i: dividend
 * @j: divider
 *
 * Return: return 1 if the input integer is prime number, otherwise 0
 */
int prime_found(int i, int j)
{
	if (j != 1)
	{
		if (i == j)
		{
			return (1);
		}
		else if (j % i == 0 || j <= 1)
		{
			return (0);
		}
		else
		{
			return (prime_found(i + 1, j));
		}
	}
	return (0);
}
/**
 * is_prime_number - checks if the number is prime number
 * @n: the number
 *
 * Return: boolean
 */
int is_prime_number(int n)
{
	int x = 2;

	return (prime_found(x, n));
}
