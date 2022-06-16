#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: the array elements
 * @n: the number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n = n - 1;

	for (i = 0 ; i < n ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
