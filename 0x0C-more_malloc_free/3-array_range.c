#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *array_range- creates an array of integers
 *@min: minimum number
 *@max: maximum number
 *Return: Always 0
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
