#include <stdio.h>
/**
 * main - print the name of the file it was compiled with
 *
 * Return: name of the file
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
