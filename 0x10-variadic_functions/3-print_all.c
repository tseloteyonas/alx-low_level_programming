#include "variadic_functions.h"
/**
 * print_char - print characters
 * @ap: input arguments
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print integers
 * @ap: input arguments
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - print floats
 * @ap: input arguments
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_string - print strings
 * @ap: input arguments
 */
void print_string(va_list ap)
{
	char *args = va_arg(ap, char *);

	if (args == NULL)
	{
		printf("%p", args);
		return;
	}
	printf("%s", args);
}
/**
 * print_all - prints anything
 * @format: input string
 */
void print_all(const char * const format, ...)
{
	simbol_t identifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'f', print_float},
		{'i', print_int}
	};

	int i = 0, j;
	char *comma = "";

	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (identifier[j].all == format[i])
			{
				printf("%s", comma);
				identifier[j].func(ap);
				comma = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
