#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid- function of a pointer to two dimensional array of integers
 *@width: first argument
 *@height: second argument
 *Return: success
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, l, k;

	if  (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j > 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < height; l++)
			a[k][l] = 0;
	}
	return (a);
}
