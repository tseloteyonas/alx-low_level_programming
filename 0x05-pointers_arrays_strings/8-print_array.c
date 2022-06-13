#include "main.h"
#include <stdio.h>
/**
 * print_array - printing integer array
 * @a: the array
 * @n: the number of elements
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0 ; t < n ; t++)
	{
		printf("%d", a[t]);

		if (t < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
