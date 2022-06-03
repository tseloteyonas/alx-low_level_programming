#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	char upp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{putchar(alp);
	}
	for (upp = 'A' ; upp <= 'Z' ; upp++)
	{
		putchar(upp);
	}
	putchar('\n');
	return (0);
}
