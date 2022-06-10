#include <stdio.h>

/**
 * main - Entry point
 * Description - printing prime factor of 612852475143
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int p = 612852475143;
	long int q = 3;

	while (q <= p / 2)
		if (p % q == 0)
			p = p / q;
		else
			q += 2;

	printf("%ld\n", p);

	return (0);
}
