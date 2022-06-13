#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i, j, k, s;
	char data[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = data[j];
			s += data[j];
			i++;
		}
		while (data[k])
		{
			if (data[k] == (2772 - s))
			{
				p[i] = data[k];
				s += data[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
