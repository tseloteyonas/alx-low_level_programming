#include "main.h"
#include <stdio.h>
/**
 * main - prints the count of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	argc--;
	printf("%d\n", argc);
	return (0);
}
