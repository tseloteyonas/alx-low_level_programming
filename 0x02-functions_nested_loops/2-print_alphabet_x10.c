#include <stdio.h>
/**
 * print_alphabet_x10 - print the alphabet 10 times.
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int alp;
	int count;

	count = 0;

	while (count <= 9)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			putchar(alp);
			alp++;
		}
		count++;
		putchar('\n');
	}
}
