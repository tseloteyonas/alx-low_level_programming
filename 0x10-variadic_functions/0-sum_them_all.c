#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the variable arguments passed
 * @n: the first argument
 *
 * Return: their sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, num;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}


	for (i = 0 ; i < n  ; i++)
	{
		num = va_arg(ap,int);
		sum = sum + num;
	}
	va_end(ap);
	return (sum);
}
