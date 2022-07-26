#include <stdlib.h>
#include <stdio.h>

/**
 * create_array- is the address of the first character
 * @size: size of array
 * @c: character
 * Return: success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
