#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: product
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
