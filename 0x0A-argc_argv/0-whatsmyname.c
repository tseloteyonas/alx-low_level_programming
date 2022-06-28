#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of a file
 * @argc: the number of arguments
 * @argv: the values
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
