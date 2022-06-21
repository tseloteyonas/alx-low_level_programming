#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: dize of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 1;
	int sum = 0;
	int s = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum = sum + a[(size + 1) * i];
		s = s + a[(size - 1) * j];
		j++;
	}
	printf("%d, %d\n", sum, s);
}
