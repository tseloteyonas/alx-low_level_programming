#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	arr = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0 ; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
